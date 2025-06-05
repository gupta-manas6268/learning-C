# Run this code in when your VS-code is in Path, 'Python Udemy' 
#  only, not in 'Module-1'.



# Relative Path
file_1 = open("0602_main.txt", 'r')
print(file_1.readlines())
file_1.close()

file_2 = open("Files/0602_main.txt", 'r')
print(file_2.readlines())
file_2.close()


file_3 = open("Files/Inner_Files/0602_main.txt", 'r')
print(file_3.readlines())
file_3.close()


# Absolute Path

# file_4 = open("C:\Users\Manas\Documents\github repos\Python Udemy\Files\Inner_Files\0602_main.txt", 'r')  # Below line 'r', Generally better because sometimes we get '\n'
file_4 = open(r"C:\Users\Manas\Documents\github repos\Python Udemy\Files\Inner_Files\0602_main.txt", 'r')   #  or '\t' in file-name, which gives us error.
print(file_4.readlines())
file_4.close()