# Bad luck, bad drug or bad heart: Computer models to the rescue
> Workshop on Digital Scholarship Days at UiO Friday January 13th 2023

[![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/ComputationalPhysiology/uio-digital-scholarship-days/HEAD)

- Documentation: https://computationalphysiology.github.io/uio-digital-scholarship-days

## Run notebooks with binder
In this document you will see the *launch binder* badge ![Binder](https://mybinder.org/badge_logo.svg)
If you click on this it will open the main repo in jupyterlab using Binder which will give you a notebook environment where you can run the notebooks in this repo.

## Run notebooks directly from the documentation page
If you visit the documentation at https://computationalphysiology.github.io/uio-digital-scholarship-days then you will see a rocket icon at the top of the page for the pages that contain an interactive notebook

![_](figures/book-binder.png)

Clicking on the binder icon will also launch the current notebook in Binder.

## Running the notebooks locally
To run the notebooks locally you need to have python version 3.8 or newer installed. You also need a working C compiler. Next, you can create a virtual environment
```
python3 -m venv venv
```
and activate it. On Linux/Mac you can activate the environment as follows
```
. venv/bin/activate
```
and on Windows, you can use the following command
```
. venv\Scripts\activate
```
Now you can install the requirements using the command
```
python3 -m pip install -r requirements.txt
```
Now you should be able to run the jupyter notebooks locally by starting jupyter lab
```
jupyter-lab
```


## Authors
- Ilsbeth Gerarda Maria van Herck
- Henrik Finsberg
- Hermenegild Arevalo


## License

[![License: CC BY 4.0](https://licensebuttons.net/l/by/4.0/80x15.png)](https://creativecommons.org/licenses/by/4.0/)


This repo is licensed using a CC-BY so you are free to use, remix, and share so long attribution is provided to the original author.
