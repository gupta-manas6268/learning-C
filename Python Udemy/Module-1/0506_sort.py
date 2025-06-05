List = ["sen", "ben", "john"]
List.sort()

for index, item in enumerate(List):
    row = f"{index + 1}.{item.capitalize()}"
    print(row)

List_2 = ["c", "d", "b"]
List_2.sort(reverse=True) # Reverse Sort.
print(List_2)