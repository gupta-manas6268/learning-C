def get_todos(filepath):
    with open(filepath, 'r') as file_local:
        todos_local = file_local.readlines()
    return todos_local


# todos = get_todos("1201_todos.txt")         # Both lines
todos = get_todos(filepath="1201_todos.txt")  # work well.
print(todos)