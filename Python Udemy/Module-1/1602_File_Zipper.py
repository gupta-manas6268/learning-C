import FreeSimpleGUI as sq

label_1 = sq.Text("Select files to compress: ")
input_1 = sq.Input()
choose_Button_1 = sq.FilesBrowse("Choose")

label_2 = sq.Text("Select destination folder: ")
input_2 = sq.Input()
choose_Button_2 = sq.FolderBrowse("Choose")

compress_Button = sq.Button("Compress")
window = sq.Window("File Compressor", 
                   layout=[[label_1, input_1, choose_Button_1], 
                           [label_2, input_2, choose_Button_2],
                           [compress_Button]])   # Mutliple-line 'sq.Window'.
window.read()
window.close()