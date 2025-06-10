# Decoupling => Converting single complex function into multiple
#                small & easy functions.
#               Ex: here, ('feet_inches_to_meters' = 'split_tuple' + 'convert) function.
#               Also, smaller decoupled functions can do individual task.

feet_inches = input("Enter feet & inches: ")

# def feet_inches_to_meters(feet_inches_local):
#     parts = feet_inches_local.split(" ") 
#     feet = float(parts[0])
#     inches = float(parts[1])

#     meters = (feet * 0.3048 + inches * 0.0254) 
#     return f"{feet} feet and {inches} inches = {meters} meters."


def split_tuple(feet_inches_local): # feet_inches_local => string.
    parts = feet_inches_local.split(" ")
    feet = float(parts[0])
    inches = float(parts[1])

    # return (feet, inches) # Both lines work well
    return feet, inches # => tuple of (feet, inches).

def convert(feet, inches):
    meters = feet * 0.3048 + inches * 0.0254
    return meters


feet_inches_tuple = split_tuple(feet_inches)
result = convert(feet_inches_tuple[0], feet_inches_tuple[1])
print(f"meters = {result}")