# modules file-name => doesn't start with numbers.


def split_tuple(feet_inches_local): # feet_inches_local => string.
    parts = feet_inches_local.split(" ")
    feet = float(parts[0])
    inches = float(parts[1])
    print("hello from split_tuple")

    # return (feet, inches) # Both lines work well
    return feet, inches # => tuple of (feet, inches).

def convert(feet, inches):
    meters = feet * 0.3048 + inches * 0.0254
    return meters


print("Hello from 'functions_1401'.")
# print(x) # Uncomment & run.
#  ((↑), above line gives error in '1401_modules.py' also.)

print((type(__name__)))
print(__name__) # O/P => "__main__"
print("I am Outside 'if' block.")
if __name__ == "__main__": # Only run in this file directly.
# Didn't run when you make it a module, run in another file.
    print("Hello in 'if' block.")
    print(convert(5, 7))