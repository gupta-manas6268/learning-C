# UR (Uncomment & Run.)














import FreeSimpleGUI.window
import functions_1701
import FreeSimpleGUI as sg   # i.e. we can only type 'sg' in place of 'FreeSimpleGUI'

label = sg.Text("Type in a To-Do")              #  line 'sg' is simple to type than
                                                #  than 'FreeSimpleGUI'

input_box = sg.InputText(tooltip="Enter todo", key="todo")
add_button = sg.Button("Add")
list_Box = sg.Listbox(values=functions_1701.get_todos(), 
                      key='todos_List', enable_events=True,
                      size=[45, 10])
edit_button = sg.Button("Edit")

Layout = [[label], [input_box, add_button], [list_Box, edit_button]]
window = sg.Window('My To-Do App', 
                   layout=Layout, 
                #  layout=[[label], [input_box, add_button], [list_Box, edit_button]], # UR
                   font=('Helvetica', 20)) 

# event = window.read() # Uncomment & run.
# print(event) # In terminal. # Uncomment & run.

while True:
    event, values = window.read()
    # event => key of widget that was just clicked. Ex: button, etc.
    # values => Dictionary

    print(1, event)                 # To understand Program
    print(2, values)                # To understand Program
    print(3, values['todos_List'])  # To understand Program

    match event:
        case "Add":
            todos = functions_1701.get_todos()
            new_todo = values['todo'] + "\n"
            todos.append(new_todo)
            functions_1701.write_todos(todos)
            window['todos_List'].update(values=todos)

        case "Edit":
            todo_to_edit = values['todos_List'][0]
            new_todo = values['todo'] + "\n"

            todos = functions_1701.get_todos()
            index = todos.index(todo_to_edit)
            todos[index] = new_todo
            functions_1701.write_todos(todos)
            window['todos_List'].update(values=todos)

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