# edit => edit from file.

index = int(input("Index of todo to edit: "))
index = index - 1

todos = []
with open('0802_main.txt', 'r') as file:
    todos = file.readlines()

new_todo = input("Enter new todo: ")
todos[index] = new_todo + '\n'

with open('0802_main.txt', 'w') as file:
    file.writelines(todos)

print(todos)







# delete => delete from file.

index = int(input("Index of todo to delete: "))
index = index - 1

todos = []
with open('0802_main.txt', 'r') as file:
    todos = file.readlines()

todo_to_remove = todos[index]
todos.pop(index)

with open('0802_main.txt', 'w') as file:
    file.writelines(todos)

print(todos)

message = f"Todo {todo_to_remove.strip('\n')} was removed from the list."
print(message)