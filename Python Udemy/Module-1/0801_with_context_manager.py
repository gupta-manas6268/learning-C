# file = open('0801_main.txt', 'r')
# todos = file.readlines()
# file.close()
#   
#   Above(↑) method is lengthy & by using with-context Manager
#    we can code it in less lines.


# with-context Manager: It automatically closes file after use,
#               & it is better to use than simple file function 
#               i.e. 'open' & 'close'.

with open('0801_main.txt') as file:           # In with-context, by default it opens files
# with open('0801_main.txt', 'r') as file:    #  in read mode, If not given
    todos = file.readlines()
print(todos)

with open('0801_main.txt', 'w') as file:
    file.writelines("Hi, there")