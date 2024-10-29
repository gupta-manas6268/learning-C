# Lists => store elements of different types

# Strings -> immutable
# List -> mutable
student = ["Manas", 97, 19, "Delhi"]
print(student)
print(student[1:2])



# List Methods
list = [2, 1, 3]
list.append(4) # adds one element at the end.
list.sort() # sorts in ascending order.
list.sort(reverse=True) # sorts in descending order.
list.reverse() # reverses list

list.insert(0, 9) # insert element at index
#        index,element

list.remove(1) # removes first occurrence of element.

list.pop(1) # removes element at index
# list.pop(index)