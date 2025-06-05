# List Length
todos = ["clean", "throw", "do", "done", 'movie']
for index, item in enumerate(todos):
    row = f"{index + 1}-{item}"
    print(row)
    
# for-loop elements can be used outside loop also.
print("Hello", index, item)
print("Length is: ", index + 1)

# len function.
print(len(todos))