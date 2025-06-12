a = "505"

# Python => when running it firstly compiles code & then 
#            runs it.
#           So, in Syntax-Error it gives error in compile time
#               i.e. O/P => "SyntaxError: '(' was never closed" (Right.)
#               but not O/P => "You have a Syntax-Error" (Wrong.), because
#               it can only give this (↑) line Run-time, but code gives
#               us error, before run-time in compile-time.

try:
    print(len(a)
except SyntaxError:
    print("You have a Syntax-Error")