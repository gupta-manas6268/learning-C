class User:
    def __init__(self, name, birthyear):
        self.name = name
        self.birthyear = birthyear
        
    def get_name(self):
        Name = self.name
        Name = Name.upper()
        return Name
        # return self.name.upper() # Also, works fine.

    def age(self, current_year):
        return (current_year - self.birthyear)
    

user = User("john", 1999)
print(user.age(2023))
print(user.get_name())