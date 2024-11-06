class Person:
    def __hello(self):  # private functions.
        print("hello person!")

    def welcome(self):
        self.__hello()


p1 = Person()
print(p1.welcome())
# print(p1.__hello())