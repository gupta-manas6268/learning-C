List = ["manas", 2, 3, 4]
List[2] = 80  # Works fine, because List are mutable.
print(List)



print("Filenames: ")
filenames = ["1.Raw Data.txt", "2.Reports.txt", "3.Presentation.txt"]
for filename in filenames:
    filename = filename.replace('.', '-', 1)
    print(filename)