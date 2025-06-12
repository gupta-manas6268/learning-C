import tkinter
window = tkinter.Tk()
# to rename the title of the window
window.title("GUI_Manas")
# pack is used to show the object in window
label = tkinter.Label(window, text="Hello World!").pack()
window.mainloop()