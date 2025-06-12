# Here, I use 'user_action.startswith('add')' or something,
#        because initial code in '0901_if_else.py' has bug.
todos = []

while True:
    user_action = input("Type add, show, edit, delete or exit: ")

    # Type in O/P => add fix the computer & then show.

    if user_action.startswith('add'): 
        todo = user_action[4:]  
        # List Slicing => from index-4 i.e. after 'add ' string to infinity.
        todos.append(todo)

    elif user_action.startswith('show'):
        print(todos)

    elif user_action.startswith('edit'): 
        number = int(user_action[5:7])
        number -= 1
        todos[number] = user_action[8:]

    elif user_action.startswith('delete'):
        number = int(user_action[7:])
        todos.remove(todos[number-1])

    elif user_action.startswith('exit'): 
        break
    else:
        print("Command is not valid.")

print("Bye!")