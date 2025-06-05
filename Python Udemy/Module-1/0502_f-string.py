# f-string
todos = ["clean", "throw", "do"]
for index, item in enumerate(todos):
    row = f"{index + 1}-{item}" # f-string
    print(row)

for index, item in enumerate(todos):
    row = f"{index + 1}: {item}" # f-string
    print(row)
    print(f"{index + 1}: {item}") # f-string is also used in 'print' function