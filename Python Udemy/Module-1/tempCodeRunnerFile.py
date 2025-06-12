import FreeSimpleGUI as sq

label_1 = sq.Text("Enter feet:")
input_1 = sq.Input(key="feet")

label_2 = sq.Text("Enter inches:")
input_2 = sq.Input(key="inches")

choose_Button = sq.Button("Convert")
output_label = sq.Text(key="output", text_color="red")

window = sq.Window("Convertor", layout=[[label_1, input_1], [label_2, input_2], [choose_Button, output_label]])

while True:
    event, values = window.read()
    print(event, values)
    
    ans = (int(values['feet']) * 0.3048) + (int(values['inches']) * 0.0254)
    window["output"].update(ans)


window.close()


