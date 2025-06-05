# Enumerate => gives index with the item.
todos = ["clean", "throw", "do"]
# In Enumerate function, you have exactly 2 variables,
#  not less, not more.
for index, item in enumerate(todos):
    print(index+1, '-', item)