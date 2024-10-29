# Set => collection of unordered items
#       Each element in set must be unique & immutable.

#   Sets -> mutable
#   Sets -> elements -> immutable

collection = {1, 2, 3 , 4, "hello", "world", "world"}
print(collection)
print(type(collection))
print(len(collection))  # total no. of items

empty_set = set() # empty set; syntax
print(type(empty_set))






# Set Methods
Set = set()
Set.add(1)
Set.add(2)
Set.add(2)
Set.add("manas")

Set.remove(1)
Set.remove(7)  # error
print(Set)


print(Set.add("hi"))
print(Set.remove(2)) # removes a particular element.
print(Set.clear()) # empties set
print(Set.pop()) # removes a random value

# union
Set2 = {7}
print(Set.union(Set2)) # combines both set values & returns new
print(Set)
print(Set2)

# intersection
print(Set.intersection(Set2)) # combines common values & returns new