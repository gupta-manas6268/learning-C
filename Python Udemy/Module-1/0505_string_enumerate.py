# String enumerate.
for i, j in enumerate("Hello"):
    print(i, j)

# Enumerate List
a = enumerate(["a", "b", "c"])
print(a) # Simply, Python didn't know how to print Enumerate-object.
print(list(a)) # But in list it works.

for i, item in [(0, 'a'), (1, 'b'), (2, 'c')]:
    print(i, item)

# Enumerate String
b = enumerate("Hello")
print(b) # Didn't work
print(str(b)) # Also, didn't work
print(list(b))