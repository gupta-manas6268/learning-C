# Tuple => Immutable.
names = ("manas", "yash", "Harish")
# names[1] = "Harry"  # Error, because tuples are Immutable.
# names.append("Harry") 
#    Error (↑), because '.append()' modifies List but in Tuple 
#    which is Immutable it didn't modify it.