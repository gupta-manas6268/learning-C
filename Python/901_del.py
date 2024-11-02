# 'del' keyword => used to delete object properties or object itself.

class Student:
    def __init__(self, name):
        self.name = name

s1 = Student("manas")
print(s1.name)
del s1.name   # deletes the object 's1'.
print(s1.name)