# See line - 7 to 9.

try:
    width = float(input("Enter rectangle width: "))
    length = float(input("Enter rectangle length: "))

    # we didn't want square's, we only want rectangles.
    if width == length: 
        exit("That looks like a square.")
    
    area = width * length
    print(area)
except ValueError:
    print("Please enter a number.")