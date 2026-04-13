# This code is same as '1701_todos.py', '2010_01_ending.py'
#  , etc. codes which are next level of this code.


# See, 'edit' and 'delete', try-except block.
# 
# try-except => if try-block isn't working (i.e. giving me error),
#                then automatically code goes to except block.

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
        try:
            number = int(user_action[5:7])
            number -= 1
            todos[number] = user_action[8:]
        except ValueError: # ValueError => when value is not there.
        # Type: edit shower. (no index of edit element is there.)
            print("Your command is not valid.")
            continue # continue => to another cycle of loop.
            # continue => opposite of break.

    elif user_action.startswith('delete'):
        try:
            number = int(user_action[7:])
            todos.remove(todos[number-1])
        except IndexError: # IndexError => index is out of range.
        # Type: delete 23 (when total elements < 23)
            print("There is not item with that number.")

        except: # here, as error type isn't specified, then 
                #  if code has under 'try' have any error
                #  & if it isn't 'IndexError' then, this
                #  except block will run.
            print("You type wrong string.")


    elif user_action.startswith('exit'): 
        break
    else:
        print("Command is not valid.")

print("Bye!")