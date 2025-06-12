user_prompt = "Enter a todo: "
todos = []

# while False: # Nothing happens.  
# while 2 > 1: # This line & below line works well.
while True:  # Infinite loop.
    todo = input(user_prompt)
    print(todo.capitalize())
    # capitalize => Capitalize first letter in only 1st word & others will be small.
    #       (Ex: 'clean the Room' => 'Clean the room'.)
    #                       ↑                   ↑
    todos.append(todo) # Add element in List.
    print(todos)