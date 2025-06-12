# Doc-string (Documentation Strings.) => Used to help-functions.

def feet_inches_to_meters(feet_inches_local):
    """
        Take feet & inches as input in same string
        and then convert them to meters.
    """
    parts = feet_inches_local.split(" ") # split, when we have " "(space) in string.
    # (↑), feet_inches_local = "5 12"
    #                  parts = [5, 12]
    feet = float(parts[0])
    inches = float(parts[1])

    meters = (feet * 0.3048 + inches * 0.0254) 
    return f"{feet} feet and {inches} inches = {meters} meters."

help(feet_inches_to_meters)          # Both lines work well.
# print(help(feet_inches_to_meters))