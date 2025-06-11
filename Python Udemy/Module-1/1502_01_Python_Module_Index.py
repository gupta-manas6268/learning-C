# Run it in Module-1 folder VS-code.

# https://docs.python.org/3/py-modindex.html





















# glob

# Experiment-1

import glob

myfiles_1 = glob.glob("*.txt") # 'glob' file => inside 'glob' function.
# Prints all ('.txt') files in current directory.
print(myfiles_1)

myfiles_2 = glob.glob("../Python Udemy/Files/*.txt") # 'glob' file => inside 'glob' function.
# (↑) doesn't work because we are in 'Module-1' folder in VScode.
print(myfiles_2) 

myfiles_3 = glob.glob("./Module-1/*.txt") # 'glob' file => inside 'glob' function.
# Prints all ('.txt') files in current directory.
print(myfiles_3)





# Experiment-2
myfiles = glob.glob("files/*.txt")

for filepath in myfiles:
    with open(filepath, 'r') as file:
        print(file.read().upper())