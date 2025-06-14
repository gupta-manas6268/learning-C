# Same code of '1901_web_app.py' with few changes are:
# 1. 'st.text_input()' is above 'for-loop'.
# 2. Line-17) => (layout="wide"), make front-end expand on whole
#                 web-page & only shrink when page size decreases.
# 3. Line-28 to 32 => changed because it now has HTML <h1> & <b>.






import streamlit as st  # streamlit => for web-apps.
import func_1901

todos = func_1901.get_todos()

st.set_page_config(layout="wide")

def add_todo():
    todo = st.session_state["new_todo"] + "\n"
    print(todo)

    todos.append(todo)
    func_1901.write_todos(todos)

st.title("My Todo App")
st.subheader("This is my todo app.")
# st.write("This app is to increase your productivity.")  # UR
st.write("<h1>This app is to increase your <b>productivity</b>.</h1>",
         unsafe_allow_html=True)  # (<b></b> => bold, <h1> => Header.)
# st.write("This app is to increase your <b>productivity</b>.",  # UR
#          unsafe_allow_html=False)                              # UR

st.text_input(label="Enter a todo:", placeholder="Add new todo...",
              on_change=add_todo, key="new_todo")

for index, todo in enumerate(todos):
    checkbox = st.checkbox(todo, key=index)

    if checkbox == True:
        todos.pop(index)
        func_1901.write_todos(todos)
        del st.session_state[index]  # del => delete in web-app.
        # (↑) index => (key = index)
        st.rerun()  # '.rerun()' => rerun's the web-page.

print("Hello") # Print every time, when we refresh 'web_app' page.