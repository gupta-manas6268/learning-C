# 'func_1901.py' => 'function_1901.py'

# Copy-Paste of 'function_1701.py' exactly.
FILEPATH = "1901_todos.txt"

def get_todos(filepath=FILEPATH):
    with open(filepath, 'r') as file_local:
        todos_local = file_local.readlines()
    return todos_local

# def write_todos(filepath="1901_todos.txt", todos_local): 
# error(↑) => "Non-default argument follows default argument."
def write_todos(todos_local, filepath=FILEPATH):
    with open(filepath, 'w') as file:
        file.writelines(todos_local)
