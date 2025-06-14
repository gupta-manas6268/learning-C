# Setup VScode in '1901 web app' folder & not 'Module-1' folder
#  to run this file.

# Run program in '1901 web app' folder by, typing 'streamlit run filename.py'
#  'streamlit run 1901_web_app.py' in Terminal.
# Stop program by 'Ctrl + C' in Terminal.
# 
# Standalone Executable => 'pip freeze > requirements.txt' (Type in Terminal)
#       'requirements.txt' => filename shouldn't be changed.
#  'requirements.txt' => stores all packages required to run my '1901_web_app.py'
#             
#   'https://tdka7w4v6pawqvwpftgqxz.streamlit.app/' => Website URL by streamlit. 

# 'pages' folder => files will be shown in Sidebar in web-page, & 
#                    You can also run them in web-page.   


# add => by input in 'text_box'
# delete => by tick in 'check-box'


import streamlit as st  # streamlit => for web-apps.
import func_1901

todos = func_1901.get_todos()

def add_todo():
    todo = st.session_state["new_todo"] + "\n"
    print(todo)

    todos.append(todo)
    func_1901.write_todos(todos)

st.title("My Todo App")
st.subheader("This is my todo app.")
st.write("This app is to increase your productivity.")

# st.checkbox("Buy grocery.")       # UR
# st.checkbox("Throw the trash.")   # UR

for index, todo in enumerate(todos):
    checkbox = st.checkbox(todo, key=index)

    if checkbox == True:
        todos.pop(index)
        func_1901.write_todos(todos)
        del st.session_state[index]  # del => delete in web-app.
        # (↑) index => (key = index)
        st.rerun()  # '.rerun()' => rerun's the web-page.

st.text_input(label="Enter a todo:", placeholder="Add new todo...",
              on_change=add_todo, key="new_todo")
# st.text_input(label="")
# 'placeholder' => for coders, use like comments.

print("Hello") # Print every time, when we refresh 'web_app' page.

# st.session_state      # UR
# (↑) Prints Dictionary in Browser. (For understanding of code)