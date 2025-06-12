user_prompt_1 = "Enter a todo: "
user_prompt_2 = 'Enter a todo: ' # '' & "" works same in Python.
# user_prompt_3 = 'don't do this ' 
#  Error ↑, because of single quote in "don't" which conflict
#  with outer Single-quote.
user_prompt_3 = "don't do this "

# Prompt = "Enter: " P_2 = input(Prompt) # Error, don't work in same line.
Prompt = "Enter: " 
P_2 = input(Prompt) 

todo_1 = input(user_prompt_1)
todo_2 = input(user_prompt_2)
todo_3 = input(user_prompt_3)

# List
# List => 0-based indexing.
todos = [todo_1, todo_2, todo_3, "Hello"]  
print(todos)

print(type(user_prompt_1))
print(type(todo_1))
print(type(todos))