todos = [] # List => 0-based indexing.

# number = input("Enter no.: ")
#  ↑ input function always gives string input.
#  So, int(number) => converts string to int.
#      float(number) => converts string to decimal-integer.

while True:
    user_action = input("Type add, show, edit or exit: ")

    # match-case => same as 'switch-case'.
    match user_action:
        case 'add':
            todo = input("Enter a todo: ")
            todos.append(todo)
        case 'show':
            print(todos)
        case 'edit':
            number = int(input("Index of todo item to edit: "))
            number -= 1
            new_todo = input("Enter new todo: ")
            todos[number] = new_todo
            print(todos)
        case 'exit':
            break

print("Bye!")