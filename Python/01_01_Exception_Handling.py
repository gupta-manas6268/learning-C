# Exception Handling: Process of responding to unwanted or unexpected
#           events when a computer runs. It deals with these events to
#           avoid program or system crashing.

a = input("Enter the no.: ")
print(f"Multiplication table of {a} is: " )
try:
    for i in range (1, 11):
        print(f"{int(a)} X {i} = {int(a)*i}")
except Exception as e:
    # print(e)
    print("Invalid Input!")

print("Some Imp. lines of code")
print("End of program")