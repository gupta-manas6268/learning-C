# Class & Object
#   class is a blueprint for creating objects.

class Student:
    name = "manas"

s1 = Student()
print(s1.name)



# Constructor => All classes have a function called '__init__()', which is always 
#               executed when object is being initiated.

# self => self parameter is a reference to current instance of class, & is used to 
#       access variables that belongs to class.

class student_2:
    # default constructors
    def __init__(self):
        pass

    # parameterized constructors
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks
        print("adding new cars in Database.")

c1 = student_2("manas", 80)
print(c1.name) # manas