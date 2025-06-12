# from 'functions_2010' import get_todos, write_todos
import functions_2010
import time

now = time.strftime("%b %d, %Y %H:%M:%S")
print("It is", now)

while True:
    user_action = input("Type add, show, edit, delete or exit: ")
    user_action = user_action.strip()

    if user_action.startswith("add"):
        todo = user_action[4:]
        todos = functions_2010.get_todos()
        todos.append(todo + '\n')
        functions_2010.write_todos(todos)

    elif user_action.startswith('show'):
        todos = functions_2010.get_todos()

        for index, item in enumerate(todos):
            item = item.strip('\n')
            row = f"{index + 1}-{item}"
            print(row)
    
    elif user_action.startswith('edit'):
        try:
            number = int(user_action[5:7])

            number = number - 1
            todos = functions_2010.get_todos()
            todos[number] = user_action[8:] + '\n'

            functions_2010.write_todos(todos)
        except ValueError:
            print("Your command is not valid.")
            continue

    elif user_action.startswith('delete'):
        try:
            number = int(user_action[9:])

            todos = functions_2010.get_todos()
            index = number - 1
            todo_to_remove = todos[index].strip('\n')
            todos.pop(index)

            functions_2010.write_todos(todos)
        except:
            print("There is no item with that number.")
            continue

    elif user_action.startswith("exit"):
        break

    else:
        print("Your command is not valid.")

