# Polymorphism: Operator Overloading
#       When same operator is allowed to have different meaning
#        according to the context.

# Operators & Dunder functions
#   a + b  # addition       => a.__add__(b)
#   a - b  # subtraction    => a.__sub__(b)
#   a * b  # multiplication => a.__mul__(b)
#   a / b  # division       => a.__truediv__(b)
#   a % b  # modulo         => a.__mod__(b)

class Complex:
    def __init__(self, real, img):
        self.real = real
        self.img = img

    def showNumber(self):
        print(self.real,"i +", self.img,"j")

    def __add__(self, num2):  # __add__ => dunder function
        newReal = self.real + num2.real
        newImg = self.img + num2.img
        return Complex(newReal, newImg)
    
    def __sub__(self, num2):  # __sub__ => dunder function
        newReal = self.real - num2.real
        newImg = self.img - num2.img
        return Complex(newReal, newImg)


num1 = Complex(1, 3)
num1.showNumber()

num2 = Complex(4, 6)
num2.showNumber()

# num3 = num1.add(num2)
# num3.showNumber()

num3 = num1 + num2
num3.showNumber()

num4 = num1 - num2
num4.showNumber()