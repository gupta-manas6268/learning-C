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

    # print(todo.title) # Didn't work without '()' but didn't give error.
    print(todo.title()) 
    # title => Capitalize first letter in each word.
    #       (Ex: 'clean the room' => 'Clean The Room'.)
    
    todos.append(todo) # Add element in List.
    print(todos)