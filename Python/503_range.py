# range() => returns sequence of no.'s, from 0-specified number.

print(range(5))

seq = range(5)
for i in seq:
    print(i)


for i in range(2, 10, 2): # range(start, stop, step-size)
    print(i)


# Q.1: Print numbers from 100-0.
for i in range(100, 0, -1):
    print(i)


# pass Statements => 'pass' is a null statement that does nothing. It is 
#                  used as a placeholder for future code.
for i in range(5):
    pass

print("some useful work")