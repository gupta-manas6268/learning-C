# Dictionary => store data values in key:value pairs.
#        They are unordered, mutable(changeable) & don't allow duplicate keys.

dict = {
    "key" : "value",
    "name" : "Manas",
    "learning" : "coding",
    "age" : 19
}
print(dict)
print(type(dict))

null_dict = {}
null_dict["name"] = "harry"
print(null_dict)




# Nested-dictionary
student = {
    "name": "Manas",
    "subjects" : {
        "phy" : 90,
        "chem" : 80,
        "math" : 70
    }
}
print(student)
print(student["subjects"]["chem"])








# Dictionary Methods
print(student.keys())             # returns all keys
print(student.values())           # returns all values
print(student.items())            # returns all (key, val) pairs as tuples
print(student.get("name"))        # returns the 'name' according to value.
print(student.update(newstudent)) # inserts the specified items to the dictionary.