import re

import sys
import shutil

import subprocess as sp
from distutils import spawn
from pathlib import Path


import numpy as np
from gotran import load_ode

from cmodel import CModel

HERE = Path(__file__).absolute().parent

MODEL_ODE_DIR = HERE.joinpath("ode")
MODEL_C_DIR = HERE.joinpath("c")


def cpath(model):
    odefile = get_full_ode_path(model)
    return Path(re.sub(str(MODEL_ODE_DIR), str(MODEL_C_DIR), str(odefile))).with_suffix(
        ".h"
    )


def cbuild_dir(model):
    cfile = cpath(model)
    return MODEL_C_DIR.joinpath(f"build_{cfile.stem}")


def _list_models(directory, ext):
    return [model.name for model in directory.iterdir() if model.suffix == ext]


def list_ode_models():
    return _list_models(MODEL_ODE_DIR, ".ode")


def get_full_ode_path(model):

    for m in MODEL_ODE_DIR.iterdir():
        if model in str(m):
            return m
    all_models = ", ".join(list_ode_models())
    msg = f"Could not find model, available models are {all_models}"
    raise ValueError(msg)


def load_model(model, rebuild=True, regenerate=False):

    # Check if model is present
    cfile = cpath(model)
    if not cfile.is_file() or regenerate:
        gotran2c(model)
    if not cfile.is_file() or rebuild:
        build_c(model)

    build_dir = cbuild_dir(model)
    lib = np.ctypeslib.load_library(next(build_dir.joinpath("lib").iterdir()), HERE)

    odefile = get_full_ode_path(model)
    ode = load_ode(str(odefile))
    return CModel(lib, ode)


def build_c(model):
    cfile = cpath(model)
    with open(MODEL_C_DIR.joinpath("template.c"), "r") as f:
        template = f.read()

    include_str = f'#include "{cfile.name}"\n'

    with open(MODEL_C_DIR.joinpath("demo.c"), "w") as f:
        f.write(include_str + template)

    model_name = cfile.stem

    build_dir = cbuild_dir(model)
    if build_dir.exists():
        shutil.rmtree(build_dir)

    build_dir.mkdir()

    sp.check_call(["cmake", f"-DCELL_LIBFILE={model_name}", ".."], cwd=build_dir)
    sp.check_call(["make"], cwd=build_dir)


def gotran2c(model):

    odefile = get_full_ode_path(model)
    cfile = cpath(model)
    sp.check_call(
        [
            sys.executable,
            "-m",
            "gotran",
            "gotran2c",
            str(odefile),
            "--solvers.explicit_euler.generate=1",
            "--solvers.rush_larsen.generate=1",
            "--code.body.use_enum=1",
            "--output",
            str(cfile),
        ]
    )


if __name__ == "__main__":
    print(list_ode_models())
    model_name = "tentusscher_panfilov_2006_M_cell"
    print(get_full_ode_path(model_name))
    model = load_model(model_name, rebuild=True)
    breakpoint()
    # gotran2c("tentusscher_panfilov_2006_M_cell")
    # load_model("tentusscher_model_2004_M", rebuild=True)
