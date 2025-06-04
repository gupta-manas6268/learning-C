# String => are Immutable (i.e. you can't change it.)
# List   => are Mutable (i.e. can change.)
# Tuples => are Immutable (Ex: Tuple = (1, "2", 3))



# String
number = "manas"
number = "1.Raw Data.txt"  # Here, we reassign Strings.
print(number)

# number[1] = "n"  # Error, because Strings are immutable.
number.replace('.', '_')
print(number) # Didn't change
print(number.replace('.', '_')) # Changes
print(number.replace('.', '_', 1)) # Only 1st '.' changes.

number = number.replace('.', '_')
print(number) # String changes by using '.replace()' function.






# List
List = ["manas", 2, 3, 4]
List[2] = 80  # Works fine, because List are mutable.
print(List)



print("Filenames: ")
filenames = ["1.Raw Data.txt", "2.Reports.txt", "3.Presentation.txt"]
for filename in filenames:
    filename = filename.replace('.', '-', 1)
    print(filename)