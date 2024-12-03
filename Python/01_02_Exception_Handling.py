try:
    num = int(input("Enter an intger: "))
    a = [6,3]
    print(a[num])
except ValueError:
    print("No. entered is not an integer.")

except IndexError:
    print("Index Error")