# See line-6. 


# (msg => message)
message = "hello mine"
def greet_1():
    message = "hello" # Also, check O/P by commenting this line.
    message = message.capitalize()
    new_message = message.capitalize()
    print("1st function")
    return new_message

def greet_2():
    message_local = "Practice coding." 
    # (↑) It's better to have variable names in function, different from
    #   global variables, because local variable in function's can sometimes
    #   change same variable name value unexpectedly.
    print("2nd function")
    str = message.isupper()

greeting_1 = greet_1()
print(greeting_1)
print(len(greeting_1))

greeting_2 = greet_2()
print(greeting_2) # none => as there is no 'Return' statement.
# print(len(greeting_2)) # error => because 'greeting_2' has 'NoneType'.
 
# print(new_message) # error => function's variable didn't work outside function.
print(message)