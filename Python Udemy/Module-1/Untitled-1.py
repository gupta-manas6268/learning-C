str = "abcd123456"

if str.__len__() <= 8:
    print("Weak Password")
elif str.__len__() <= 14 and str.__len__() >= 8:
    print("Medium Pass")
else:
    print("Strong Pass")