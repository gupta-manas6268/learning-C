import FreeSimpleGUI as sq
import zip_Extractor_1803

sq.theme("Black")

label_1 = sq.Text("Select zip file:")
input_1 = sq.Input()
choose_button_1 = sq.FileBrowse("Choose", key="zip")

label_2 = sq.Text("Select dest. dir.:") # (dest. dir. => destination directory.)
input_2 = sq.Input()
choose_button_2 = sq.FolderBrowse("Choose", key="folder")

extract_button = sq.Button("Extract")
output_label = sq.Text(key="output", text_color="green")

window = sq.Window("Zip Extractor",
                   layout=[[label_1, input_1, choose_button_1],
                           [label_2, input_2, choose_button_2],
                           [extract_button, output_label]])

while True:
    event, values = window.read()
    print(event, values)

    File_path = values["zip"]
    Dest_dir = values["folder"]
    zip_Extractor_1803.extract_file(File_path, Dest_dir)

    window["output"].update(value="Extraction Completed")

window.close()