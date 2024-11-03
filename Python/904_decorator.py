# class method: It is bound to the class & receives the class as
#       an implicit first argument.

# Note: static method can't access or modify class state & 
#        generally for utility.

class Person:
    name = "anonymous"

    def changeName(self, name):
        # self.name = name      # Also check by uncommenting this line
        self.__class__.name = "Rahul"  # commenting this line.

p1 = Person()
p1.changeName("rahul kumar")
print(p1.name)
print(Person.name)



# class method

class Person2:
    name = "anonymous"

    @classmethod  # decorator
    def changeName2(cls, name):  # cls => class
        cls.name = "Rahul kumar"  

p2 = Person2()
p2.changeName2("rahul kumar")
print(p2.name)
print(Person2.name)




# Property: We use '@property' decorator on any method in class to
#       use method as a property.

class Student:
    def __init__(self, phy, chem, math):
        self.phy = phy
        self.chem = chem
        self.math = math

    @property
    def percentage(self):
        return str((self.phy + self.chem + self.math) / 3) + "%"
    
stu1 = Student(98, 97, 99)
print(stu1.percentage)

stu1.phy = 86
print(stu1.percentage)