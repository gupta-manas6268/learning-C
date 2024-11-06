# Inheritance: When one class(child/ derived) the properties &
#           methods of another class(parent/ base).

# Inheritance Types:
# 1. Single Inheritance
# 2. Multi-level Inheritance
# 3. Mutliple Inheritance

class Car:
    color = "black"

    @staticmethod
    def start():
        print("car started..")
    
    @staticmethod
    def stop():
        print("car stopped.")

class ToyotaCar(Car):
    def __init__(self, name):
        self.name = name

class Model(ToyotaCar):
    def __init__(self, name):
        self.name

car1 = ToyotaCar("fortuner")
car2 = ToyotaCar("prius")

print(car1.name)
print(car1.start())
print(car1.color)




# Mutliple Inheritance

class A:
    varA = "class A"

class B:
    varB = "class B"

class C(A, B):
    varC = "class C"

c1 = C()

print(c1.varC) 
print(c1.varB)
print(c1.varA)


# Super method:
#       super() method is used to access methods of parent class.

class Car2:
    def __init__(self, type):
        self.type = type

    @staticmethod
    def start():
        print("car started..")
    
    @staticmethod
    def stop():
        print("car stopped.")

class ToyotaCar2(Car2):
    def __init__(self, name, type):
        super().__init__(type) # super => to access method of parent class.
        self.name = name
        super().start()

car10 = ToyotaCar2("prius", "electric")
print(car10.type)  