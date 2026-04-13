# 1st Code
print(dir(str))
print("Gap")
print(help("manas".capitalize))

# Methods that return an output.
Str = "manas"
Str.capitalize()
print(Str) # Str => doesn't 'capitalize' because '.capitalize' returns output,
           #     =>  but doesn't modify original string.
           #     => (because, string's are immutable.)
Str_2 = Str.capitalize()
print(Str_2) # capitalize.

# Methods that didn't return an output.
List = ["manas", "harry", "bane"]
data_type = List.append("Wayne")
print(data_type)  # None => because '.append()' modifies original list, but didn't
                  #      =>  give an output.
                  #      => (because, list are mutable.)
print(List)

print("Now, 2nd code")
# 2nd Code
print(dir(list))
print("Gap")
print(help(list.count))