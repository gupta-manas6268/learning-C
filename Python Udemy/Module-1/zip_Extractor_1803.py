import zipfile

def extract_file(file_path, dest_dir):
    with zipfile.ZipFile(file_path, 'r') as file:
        file.extractall(dest_dir) 
        # '.extractall' => 'extract_All' Extract all files of a folder.


if __name__ == "__main__":
    extract_file("myOutput.zip", "")