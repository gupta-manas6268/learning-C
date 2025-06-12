feet_inches = input("Enter feet and inches: ")

def convert(feet_inches_local):
    parts = feet_inches_local.split(" ") # split, when we have " "(space) in string.
    # (↑), feet_inches_local = "5 12"
    #                  parts = [5, 12]
    feet = float(parts[0])
    inches = float(parts[1])

    meters = (feet * 0.3048 + inches * 0.0254) 
    return f"{feet} feet and {inches} inches = {meters} meters."


print(convert(feet_inches))