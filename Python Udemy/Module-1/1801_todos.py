# Error Fixing from '1701_todos.py'
# It uses same 'functions_1701.py' & '1701_todos.txt' files.














import FreeSimpleGUI.window
import functions_1701
import FreeSimpleGUI as sg   # i.e. we can only type 'sg' in place of 'FreeSimpleGUI'
import time
import os

if not os.path.exists("1701_todos.txt"):  # If '1701_todos.txt' file didn't exists,
    with open("1701_todos.txt", 'w') as file: # then it will make '1701_todos.txt' file
        pass

sg.theme("Purple")

clock_label = sg.Text('', key='clock')
label = sg.Text("Type in a To-Do")              #  line 'sg' is simple to type than
                                                #  than 'FreeSimpleGUI'

input_box = sg.InputText(tooltip="Enter todo", key="todo")
add_button = sg.Button("Add")
list_Box = sg.Listbox(values=functions_1701.get_todos(), 
                      key='todos_List', enable_events=True,
                      size=[45, 10])
edit_button = sg.Button("Edit")
delete_button = sg.Button("Delete")
exit_button = sg.Button("Exit")

Layout = [[clock_label],
          [label], 
          [input_box, add_button], 
          [list_Box, edit_button, delete_button],
          [exit_button]]
window = sg.Window('My To-Do App', 
                   layout=Layout, 
                #  layout=[[label], [input_box, add_button], [list_Box, edit_button]], # UR
                   font=('Helvetica', 20)) 

# event = window.read() # Uncomment & run.
# print(event) # In terminal. # Uncomment & run.

while True:
    event, values = window.read(timeout=200) 
    # (timeout=200) => Every 200-milisecond, time will change accodingly.
    window["clock"].update(value=time.strftime("%b %d, %Y %H:%M:%S"))

    match event:
        case "Add":
            todos = functions_1701.get_todos()
            new_todo = values['todo'] + "\n"
            todos.append(new_todo)
            functions_1701.write_todos(todos)
            window['todos_List'].update(values=todos)

        case "Edit":
            try:
                todo_to_edit = values['todos_List'][0]
                new_todo = values['todo']

                todos = functions_1701.get_todos()
                index = todos.index(todo_to_edit)
                todos[index] = new_todo
                functions_1701.write_todos(todos)
                window['todos_List'].update(values=todos)
            except IndexError:
                sg.popup("Please select an item first.", font=("Helvetica", 20))

        case "Delete":
            try:
                todo_to_delete = values['todos_List'][0]
                todos = functions_1701.get_todos()
                todos.remove(todo_to_delete)

                functions_1701.write_todos(todos)
                window['todos_List'].update(values=todos)
                window['todo'].update(value='')
            except IndexError:
                sg.popup("Please select an item first.", font=("Helvetica", 20))

        case "Exit":
            break

        case 'todos_List':
            window['todo'].update(value          =  values['todos_List'][0])
            #                 (value(↑) => no 's')   ↑(values => with 's')

        case sg.WIN_CLOSED: 
        # '.WIN_CLOSED' => when we close GUI, to avoid error in Terminal

            break 
            # exit() # UR (Uncomment & Run.)
            # (↑) Completely stop Programs.

print("Bye")  # Didn't run in 'exit()' case.
window.close()