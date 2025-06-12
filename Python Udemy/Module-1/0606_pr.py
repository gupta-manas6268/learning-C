# Q.3:
# Bug-Fixing Ex.: Take a look at the code below:

#     file = open("data.txt", 'w')  
#     file.write("100.12")
#     file.write("111.23")
#     file.close()

# The code creates a text file which contains the following content:
# 100.12111.23

# However, the correct content should be:
# 100.12
# 111.23

# Please fix the code so it creates the file with the correct content.

























file = open("data.txt", 'w')
     
file.write("100.12\n")  # '\n' works here, for separate lines.
file.write("111.23\n")
     
file.close()