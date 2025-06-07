# todos = []

# while True:
#     user_action = input("Type add, show, or exit: ")

#     # match-case => same as 'switch-case'.
#     match user_action:
#         case 'add':
#             todo = input("Enter a todo: ")
#             todos.append(todo)
#         case 'show':
#             print(todos)
#         case 'exit':
#             break

# print("Bye!")







todos = []

while True:
    user_action = input("Type add, show, edit, delete or exit: ")

    # Type in O/P => add fix the computer & then show.

    if 'add' in user_action or 'new' in user_action or 'more' in user_action: # or
    # (↑)i.e. => if(user_action => 'add' || 'new' || 'more')
        # todo = input("Enter a todo: ")
        todo = user_action[4:]  
        # List Slicing => from index-4 i.e. after 'add ' string to infinity.
        todos.append(todo)

        todo = user_action[1:7]
        todos.append(todo)

    elif 'show' in user_action:
        print(todos)

    elif 'edit' in user_action and 'ed' in user_action: # add
    # O/P => edit 3  hitman 
    #              ↑(extra space)
    # O/P => edit 56 hitman
        number = int(user_action[5:7])
        number -= 1
        todos[number] = user_action[8:]

    elif 'delete' in user_action:
        number = int(user_action[7:])
        todos.remove(todos[number-1])

    elif 'exit' in user_action or 'add' not in user_action: # not
    # user_action = 'exit' but user_action != 'add'.
        break
    else:
        print("Command is not valid.")

print("Bye!")