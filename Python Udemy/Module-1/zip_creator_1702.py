import zipfile
import pathlib

def make_Archive(file_Paths, destination_Directory): # dest_Dir. => destination_Director
    # with zipfile.ZipFile(destination_Directory + "/" + "compressed.zip", 'w') as archive:    # UR

    dest_Path = pathlib.Path(destination_Directory, "compressed.zip")
    with zipfile.ZipFile(dest_Path, 'w') as archive:
        for file_Path in file_Paths:
            file_Path = pathlib.Path(file_Path)
            archive.write(file_Path, arcname=file_Path.name)


if __name__ == "__main__":
    make_Archive(file_Paths=["1701_todos.txt", "functions_1701.py"], destination_Directory="destination")