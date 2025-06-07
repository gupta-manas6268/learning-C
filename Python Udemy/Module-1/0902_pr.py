# Q.1: Tell me Strong password or not.
#        Conditions of Strong password:
#         1. Length of password >= 8.
#         2. Must contain atleast one number.
#         2. Must contain atleast one Uppercase Letter.



































password = input("Enter new password: ")

ans = False
if len(password) >= 8:
    condition_1 = False
    condition_2 = False
    for i in password:
        val = i.isdigit() 
        # '.isdigit()' => checks whether that string is digit or not.
        upper = i.isupper()
        # '.isupper()' => checks whether that string is uppercase or not.

        # if True in val: # error, because "TypeError: argument of type 'bool' is not iterable"
        if val == True:   # It works.
            condition_1 = True
        if upper == True:
            condition_2 = True
        if condition_1 == True and condition_2 == True:
            break

    if condition_1 == True and True == condition_2:
        ans = True


if ans == True:
    print("Strong Password")
else:
    print("Weak Password")