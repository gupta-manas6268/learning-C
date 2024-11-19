# Lists => store elements of different types

# Strings -> immutable
# List -> mutable
student = ["Harry", 97, 19, "Delhi"]
print(student)
print(student[1:2])



# List Methods
list = [2, 1, 1, 3]
list.append(4) # adds one element at the end.
print("After Append: ", list)
list.sort() # sorts in ascending order.
print("After Sort: ", list)
# list.sort(reverse=True) # sorts in descending order.
# list.reverse() # reverses list

list.insert(0, 9) # insert element at index
print("After Insert: ", list)
#        index,element

list.remove(1) # removes first occurrence of element.
print("After Remove: ", list)

# list.pop(1) # removes element at index
# list.pop(index)