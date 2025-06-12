# This is Complete-Claude code.
# My code is giving me bugs.
















# Fixed To-Do App
import FreeSimpleGUI as sg
import functions_1701

# Create GUI elements
label = sg.Text("Type in a To-Do")
input_box = sg.InputText(tooltip="Enter todo", key="todo")
add_button = sg.Button("Add")
list_box = sg.Listbox(values=functions_1701.get_todos(), 
                      key='todos_List', enable_events=True,
                      size=[45, 10])
edit_button = sg.Button("Edit")
delete_button = sg.Button("Delete")
exit_button = sg.Button("Exit")

# Layout definition
layout = [[label], 
          [input_box, add_button], 
          [list_box, edit_button, delete_button],
          [exit_button]]

# Create window
window = sg.Window('My To-Do App', 
                   layout=layout, 
                   font=('Helvetica', 20)) 

# Main event loop
while True:
    event, values = window.read()
    
    print(1, event)                 # Debug: show event
    print(2, values)                # Debug: show values
    print(3, values['todos_List'])  # Debug: show selected todos
    
    match event:
        case "Add":
            if values['todo'].strip():  # Check if input is not empty
                todos = functions_1701.get_todos()
                new_todo = values['todo'].strip() + "\n"
                todos.append(new_todo)
                functions_1701.write_todos(todos)
                window['todos_List'].update(values=todos)
                window['todo'].update(value='')  # Clear input field
            
        case "Edit":
            if values['todos_List'] and values['todo'].strip():  # Check selections
                todo_to_edit = values['todos_List'][0]  # Get first selected item
                new_todo = values['todo'].strip() + "\n"
                todos = functions_1701.get_todos()
                try:
                    index = todos.index(todo_to_edit)
                    todos[index] = new_todo
                    functions_1701.write_todos(todos)
                    window['todos_List'].update(values=todos)
                    window['todo'].update(value='')  # Clear input field
                except ValueError:
                    print("Error: Todo item not found")
            
        case "Delete":
            if values['todos_List']:  # Check if something is selected
                todo_to_delete = values['todos_List'][0]
                todos = functions_1701.get_todos()
                try:
                    todos.remove(todo_to_delete)
                    functions_1701.write_todos(todos)
                    window['todos_List'].update(values=todos)
                    window['todo'].update(value='')  # Clear input field
                except ValueError:
                    print("Error: Todo item not found")
            
        case "Exit":
            break
            
        case 'todos_List':
            if values['todos_List']:  # Check if something is selected
                selected_todo = values['todos_List'][0].strip() # Remove newline
                window['todo'].update(value=selected_todo)
            
        case sg.WIN_CLOSED: 
            break 

print("Bye")
window.close()