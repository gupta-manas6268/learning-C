import FreeSimpleGUI as sq

label_1 = sq.Text("Enter feet:")
input_1 = sq.Input()

label_2 = sq.Text("Enter inches:")
input_2 = sq.Input()

choose_Button = sq.Button("Convert")

window = sq.Window("Convertor", layout=[[label_1, input_1], [label_2, input_2], [choose_Button]])
window.read()
window.close()


