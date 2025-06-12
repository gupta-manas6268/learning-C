import FreeSimpleGUI as sq
import zip_creator_1702

label_1 = sq.Text("Select files to compress: ")
input_1 = sq.Input()
choose_Button_1 = sq.FilesBrowse("Choose" , key="files")

label_2 = sq.Text("Select destination folder: ")
input_2 = sq.Input()
choose_Button_2 = sq.FolderBrowse("Choose", key="folder")

compress_Button = sq.Button("Compress")
output_label = sq.Text(key="output", text_color="green")
window = sq.Window("File Compressor", 
                   layout=[[label_1, input_1, choose_Button_1], 
                           [label_2, input_2, choose_Button_2],
                           [compress_Button, output_label]])   

while True:
    event, values = window.read()
    print(event, values)

    file_Paths = values["files"].split(";")
    folder = values["folder"]

    zip_creator_1702.make_Archive(file_Paths, folder)
    window["output"].update(value="Compression completed")

window.close()