# Third Party Module => Those modules which aren't 
#                        inbuilt in Python but are made
#                        by some Third-Party users.

# https://pypi.org/ => Link to get Third-Party Module.


# https://docs.pysimplegui.com/en/latest/cookbook/
# The Cookbook
# The PySimpleGUI Cookbook has lots of recipes that are great for learning how to make programs or to provide examples for you to take from. The Demo Programs are also filled with examples. You can see previews of the demo programs in the Demo Screenshots tab.
# The eCookbook uses Trinkets that allow you to see what the output of the code will look like, right in the browser. The original cookbook is taken from the old docs. These two cookbooks are not identical, so although there may be recipes on both cookbooks, there may also be recipes in the eCookbook that aren't in the original cookbook, and vice versa.
# The eCookbook will be the focus moving forward where new recipes will be added.
# eCookbook
# Original












import FreeSimpleGUI.window
import FreeSimpleGUI as sg   # i.e. we can only type 'sg' in place of 'FreeSimpleGUI'

# label = FreeSimpleGUI.Text("Type in a To-Do") # Both lines work well, but below 
label = sg.Text("Type in a To-Do")              #  line 'sg' is simple to type than
                                                #  than 'FreeSimpleGUI'

input_box = sg.InputText(tooltip="Enter todo")
add_button = sg.Button("Add")

# window = sg.Window('My To-Do App', layout=[[label, input_box]])  
# Also, run when you uncomment (↑)above line.

# window = sg.Window('My To-Do App', layout=[[label, input_box, add_button]])   # Uncomment it.
window = sg.Window('My To-Do App', layout=[[label], [input_box], [add_button]]) # Uncomment it.
# window = sg.Window('My To-Do App', layout=[[label], [input_box, add_button]]) # Uncomment it.
window.read()
print("Hello, after closing GUI.")
window.close()