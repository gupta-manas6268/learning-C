# List functions => Find in Python console by typing 'dir(list)'
#                   & then 'help(list.pop)' or 'help(list.remove)'

todos = ["clean", "throw", "do", "done", 'movie']
number = int(input("Index of todo to remove: "))
number -= 1
todos.pop(number) # '.pop' => remove that index element from List.
print(todos)