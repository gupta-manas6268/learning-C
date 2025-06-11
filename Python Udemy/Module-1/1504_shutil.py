import shutil # Make 'zip' file.

shutil.make_archive("myOutput", "zip", "files")
# Take all files in "files"-folder and make "myOutput.zip"
#  which is a zip-file.