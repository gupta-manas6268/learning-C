# Tuples => create immutable sequence of values.
tup = (2, 1, 3, 1)
print(tup[0])
# tup[0] = 5 # this line gives error, because it is immutable.


# Tuples slicing
print(tup[1:3])


# Tuples Methods
tup.index(1) # returns index of first occurence
tup.count(1) # counts total occurrences