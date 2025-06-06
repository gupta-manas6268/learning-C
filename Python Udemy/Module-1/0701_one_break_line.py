# Files

# new_todos => List with each line as elements, because '.readlines()' gives us a List.

# Write
todos = ["clean", "throw", "do", "mine"]
# todos = ["clean", "throw", "do"] + "\n" # Error

file = open('0701_main.txt', 'w') # 'w' => write
for todo in todos:
    file.write(todo + "\n")

# Read

# todos_2
file = open('0701_main.txt', 'r') 
todos_2 = file.readlines() # new_todos => List with each line as elements.

for index, item in enumerate(todos_2):
    row = f"{index + 1}-{item}"
    print(row)  # Two break lines => One break line because of 'todos_2'
                #                   & second becasue of existing '\n' break line in file.
file.close() 




# Methods for One-Break Line

# Method-1:

# new_todos_1
file = open('0701_main.txt', 'r')

new_todos_1 = []
for item in todos:
    new_item = item.strip('\n')
    new_todos_1.append(new_item)

for index, item in enumerate(new_todos_1):
    row = f"{index + 1}-{item}"
    print(row)  # One break lines => Only one break line because of 'new_todos' as 
                #                     & we cut second break line in file by strip '\n'

print("\n")
file.close() 



# Method-2 => List Comprehension Method
file = open('0701_main.txt', 'r')

new_todos_2 = [item.strip('\n') for item in todos] # List Comprehension

for index, item in enumerate(new_todos_2):
    row = f"{index + 1}-{item}"
    print(row)  # One break lines 

print("\n")
file.close()


# Method-3 => Simple Method (simply using initial 'todos' list.)
#              without using Files.

for index, item in enumerate(todos):
    item = item.strip('\n')
    row = f"{index + 1}-{item}"
    print(row)  # One break lines 

print("\n")
file.close()