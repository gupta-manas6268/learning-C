# with
with open("demo.txt", "r") as f:
    data = f.read()
    print(data)

with open("demo.txt", "w") as f:
    f.write("new data")



# Deleting a File
#       using the os module
#       Module(like a code library) is file written by another programmer 
#        that generally has functions we can use.

import os
os.remove("702_demo.txt")







# Q.1: WAF that replace all occurrences of "Java" with "python" in "704_pr.txt" file.
# Q.2: Search if word "learning" is present in above file or not.

with open("704_pr.txt", "r") as f:
    data = f.read()

new_data = data.replace("Java", "Python")
print(new_data)


word = "learning"
with open("704_pr.txt", "r") as f:
    data = f.read()
    if(data.find(word) != -1):
        print("Found")
    else:
        print("Not found")



# Q.3: WAF to find in which line of file does word "learning" occur first.

def check_for_line():
    word = "learning"
    data = True
    line_No = 1
    with open("704_pr.txt", "r") as f:
        while data:
            data = f.readline()
            if(word in data):
                print(line_No)
            line_No += 1

# Q.4: From a file containing no.'s separated by comma, print count of even no.'s.

count = 0
with open("705_pr.txt", "r") as f:
    data = f.read()
    print(data)

    nums = data.split(",")
    for val in nums:
        if(int(val) % 2 == 0):
            count += 1

print(count)