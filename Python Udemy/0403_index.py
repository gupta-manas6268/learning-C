mylist = ['a', 'b', 'c']

print(mylist[1] == 'b')
z = mylist[1]
print(z == 'b')

# .index => finds index of element in list.
print(mylist.index('b'))
# print(mylist.index('x')) # Error, because 'x' is not in List.

print(dir(list))