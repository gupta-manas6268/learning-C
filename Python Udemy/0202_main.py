user_prompt = "Enter a todo: "
todos = []

while True:  # Infinite loop.
    todo = input(user_prompt)
    # print(todo.title) # Didn't work without '()' but didn't give error.
    print(todo.title()) 
    # title => Capitalize first letter in each word.
    #       (Ex: 'clean the room' => 'Clean The Room'.)
    todos.append(todo) # Add element in List.
    print(todos)