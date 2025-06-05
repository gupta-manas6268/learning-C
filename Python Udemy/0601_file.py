# Files

# new_todos = file.readlines()    # See line-33.
# new_todos => List with each line as elements, because '.readlines()' gives us a List.

# Write
todos = ["clean", "throw", "do"]
# todos = ["clean", "throw", "do"] + "\n" # Error

file = open('0601_main.txt', 'w') # 'w' => write
file.writelines((todos))

file.writelines(("\n"))

for todo in todos:
    file.write(todo + " ")

file.write("\n Hey there\n")

# Read
file = open('0601_main.txt', 'r') # 'r' => read
Read_1 = file.read()
print(Read_1)

file = open('0601_main.txt', 'r') 
# If I comment above(↑), then line-18, Pointer is moved to end
#  by line-19, by taking to all elements of list.
#  That's why, we again open file from beginning. 
Read_2 = file.readlines()
print(Read_2)

file = open('0601_main.txt', 'r') 
new_todos = file.readlines() # new_todos => List with each line as elements.

for index, item in enumerate(new_todos):
    row = f"{index + 1}-{item}"
    print(row)  # Two break lines => One break line because of 'new_todos'
                #                   & second becasue of existing '\n' break line in file.

file.close() # Always close after use.