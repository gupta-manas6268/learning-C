# Private attributes & methods:
#       They are used only within class & are not accessible
#        from outside class.

class Account:
    def __init__(self, acc_no, acc_pass):
        self.acc_no = acc_no
        self.__acc_pass = acc_pass  # '__' in front of 'acc_pass' makes it private.
    
    def reset_pass(self):
        print(self.__acc_pass)


class Person:
    def __hello(self):  # private functions.
        print("hello person!")

    def welcome(self):
        self.__hello()


acc1 = Account("12345", "abcde")
print(acc1.acc_no)
# print(acc1.__acc_pass)  # Also, run code by uncommenting this line.
print(acc1.reset_pass())

p1 = Person()
print(p1.welcome())