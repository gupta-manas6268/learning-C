# Methods

class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def welcome(self): # method
        print("welcome student")

s1 = Student("manas", 80)
s1.welcome()

# Q.1: Create student class that takes name & marks of 3 subjects as arguments
#    in constructor. Then create method to print average.

class stu_2:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def get_avg(self):
        sum = 0
        for val in self.marks:
            sum += val
        print("avg: ", sum/3)

s1 = stu_2("manas", [99, 98, 97])
s1.get_avg()



# Static Methods => they don't use self parameter (work at class level)
class stu_3:
    @staticmethod # decorator => to wrap another function in order to extend
                  #    behaviour of wrapped function, without permanently
                  #    modifying it.
    def hello():
        print("hello")



# Note:
# 1. Abstraction: Hiding implementation details of class & only showing 
#           essential features to user.

# 2. Encapsulation: Wrapping data & functions into a single unit (object).