# import functions_1401  # => if 'functions_1401.py' is in same folder as '1401_modules.py'
from modules import functions_1401 # Local Module.
# Local Module => Modules which I make.

# when a file is imported it's functions and 'main' block 
#  is run automatically.

feet_inches_tuple = functions_1401.split_tuple("4 10")
result = functions_1401.convert(feet_inches_tuple[0], feet_inches_tuple[1])
print(f"meters_1 = {result}")








# Method-2
from modules.functions_1401 import split_tuple, convert 
#            (file-name(↑))         ((↑) functions (↑))
# Here, functions which you want to import should be given.
feet_inches_tuple_2 = split_tuple("5 10")
result = convert(feet_inches_tuple[0], feet_inches_tuple[1])
print(f"meters_2 = {result}")
