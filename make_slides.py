from pathlib import Path

pages = sorted(Path("slides").iterdir(), key=lambda x: int(x.stem.split("_")[1]))

text = "# Presentation\n" + "\n".join(
    [f"![slide{i}]({page.as_posix()})" for i, page in enumerate(pages)],
)
Path("presentation.md").write_text(text)
