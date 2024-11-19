dict = {
    "key" : "value",
    "name" : "Harry",
    "learning" : "coding",
    "age" : 19
}
# print(dict)

print(dict.keys())             # returns all keys
print(dict.values())           # returns all values
print(dict.items())            # returns all (key, val) pairs as tuples
print("dict.get(name)) gives:", dict.get("name"))        # returns the 'name' according to value.