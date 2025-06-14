# Command Line Interface (CLI) => Ex: Command-Prompt, Powershell, Git-Bash, etc.

# Git-Bash CLI (Command Line Interface): 
# (Methods are => pwd, touch, ls, ls *.py, mkdir, cd, cd.., rm, rm -r, mv, cp, nano, cat, etc.)
# 
# 
# Manas@LAPTOP-JSFT59N4 MINGW64 ~           # => Terminal
# $ pwd                                     # => pwd => Command to see in which folder Terminal is now.
# /c/Users/Manas                            # O/P => Path of Terminal

# Manas@LAPTOP-JSFT59N4 MINGW64 ~           # => Terminal
# $ touch file1.txt                         # touch => Make a file named 'file1.txt'

# Manas@LAPTOP-JSFT59N4 MINGW64 ~           # => Terminal
# $ ls                                      # ls => O/P's all files in current Terminal folder.
# 
# O/P:
# 
#  001_Project/         Favorites/              NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.0.regtrans-ms                             OneDrive/       SendTo@              file1.txt
#  002_3D/             'Important Documents'/   NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.1.regtrans-ms                             Oracle/        'Start Menu'@         ntuser.dat.LOG1
#  AppData/             Links/                  NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.2.regtrans-ms                             Pictures/       Templates@           ntuser.dat.LOG2
# 'Application Data'@  'Local Settings'@        NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.blf                                       Postman/        VLC/                 ntuser.ini
#  Contacts/            Movies/                 NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TM.blf                                        PrintHood@      Videos/              source/
#  Cookies@             Music/                  NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TMContainer00000000000000000001.regtrans-ms   Recent@         anaconda3/
#  Documents/          'My Documents'@          NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TMContainer00000000000000000002.regtrans-ms  'Saved Games'/   anaconda_projects/
#  Downloads/           NTUSER.DAT              NetHood@                                                                                       Searches/       eclipse/

# Manas@LAPTOP-JSFT59N4 MINGW64 ~          # => Terminal
# $ touch file2.txt

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ touch file3.py

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ ls *.txt                              # ls *.txt => O/P's all '.txt' in current folder of Terminal.
# file1.txt  file2.txt                    # O/P => all '.txt' in folder.(current folder of Terminal)

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ mkdir data                            # mkdir => make a directory(folder) with name 'data'.

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ pwd
# /c/Users/Manas

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ cd data                              # cd => change directory of Terminal to 'data'.

# Manas@LAPTOP-JSFT59N4 MINGW64 ~/data   # Directory of Terminal changed.
# $ pwd
# /c/Users/Manas/data

# Manas@LAPTOP-JSFT59N4 MINGW64 ~/data
# $ ls                                   # ls => As 'data' currently have no-files. So, O/P => nothing.

# Manas@LAPTOP-JSFT59N4 MINGW64 ~/data
# $ touch file10.txt

# Manas@LAPTOP-JSFT59N4 MINGW64 ~/data
# $ ls
# file10.txt

# Manas@LAPTOP-JSFT59N4 MINGW64 ~/data
# $ cd ..                                # cd.. => change directory one folder up.

# Manas@LAPTOP-JSFT59N4 MINGW64 ~        # Directory is now one folder up.
# $ pwd
# /c/Users/Manas

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ ls
#  001_Project/         Favorites/              NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.0.regtrans-ms                             OneDrive/       SendTo@              eclipse/
#  002_3D/             'Important Documents'/   NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.1.regtrans-ms                             Oracle/        'Start Menu'@         file1.txt
#  AppData/             Links/                  NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.2.regtrans-ms                             Pictures/       Templates@           file2.txt
# 'Application Data'@  'Local Settings'@        NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.blf                                       Postman/        VLC/                 file3.py
#  Contacts/            Movies/                 NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TM.blf                                        PrintHood@      Videos/              ntuser.dat.LOG1
#  Cookies@             Music/                  NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TMContainer00000000000000000001.regtrans-ms   Recent@         anaconda3/           ntuser.dat.LOG2
#  Documents/          'My Documents'@          NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TMContainer00000000000000000002.regtrans-ms  'Saved Games'/   anaconda_projects/   ntuser.ini
#  Downloads/           NTUSER.DAT              NetHood@                                                                                       Searches/       data/                source/

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ rm file1.txt                        # rm => remove file 'file1.txt' from folder.

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ ls                                  # To check whether file is removed.
#  001_Project/         Favorites/              NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.0.regtrans-ms                             OneDrive/       SendTo@              eclipse/
#  002_3D/             'Important Documents'/   NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.1.regtrans-ms                             Oracle/        'Start Menu'@         file2.txt
#  AppData/             Links/                  NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.2.regtrans-ms                             Pictures/       Templates@           file3.py
# 'Application Data'@  'Local Settings'@        NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.blf                                       Postman/        VLC/                 ntuser.dat.LOG1
#  Contacts/            Movies/                 NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TM.blf                                        PrintHood@      Videos/              ntuser.dat.LOG2
#  Cookies@             Music/                  NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TMContainer00000000000000000001.regtrans-ms   Recent@         anaconda3/           ntuser.ini
#  Documents/          'My Documents'@          NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TMContainer00000000000000000002.regtrans-ms  'Saved Games'/   anaconda_projects/   source/
#  Downloads/           NTUSER.DAT              NetHood@                                                                                       Searches/       data/

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ rm -r data                        # 'rm -r' => remove a folder named 'data.

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ cd data
# bash: cd: data: No such file or directory

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ touch file20.txt

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ mv file20.txt file30.txt         # mv => change name of file 'file20.txt' to 'file30.txt'

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ ls
#  001_Project/         Favorites/              NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.0.regtrans-ms                             OneDrive/       SendTo@              file2.txt
#  002_3D/             'Important Documents'/   NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.1.regtrans-ms                             Oracle/        'Start Menu'@         file3.py
#  AppData/             Links/                  NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.2.regtrans-ms                             Pictures/       Templates@           file30.txt
# 'Application Data'@  'Local Settings'@        NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.blf                                       Postman/        VLC/                 ntuser.dat.LOG1
#  Contacts/            Movies/                 NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TM.blf                                        PrintHood@      Videos/              ntuser.dat.LOG2
#  Cookies@             Music/                  NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TMContainer00000000000000000001.regtrans-ms   Recent@         anaconda3/           ntuser.ini
#  Documents/          'My Documents'@          NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TMContainer00000000000000000002.regtrans-ms  'Saved Games'/   anaconda_projects/   source/
#  Downloads/           NTUSER.DAT              NetHood@                                                                                       Searches/       eclipse/

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ mkdir data

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ mv file3                        # Here, I press 'Tab' button not 'Enter'. So, it gives all file after name of 'file3'
# file3.py    file30.txt            # O/P => which are 'file3.py' & file30.txt' in current folder.

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ mv file30.txt
# mv: missing destination file operand after 'file30.txt'
# Try 'mv --help' for more information.

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ mv file30.txt data/file30.txt

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ ls data
# file30.txt

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ ls
#  001_Project/         Favorites/              NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.0.regtrans-ms                             OneDrive/       SendTo@              eclipse/
#  002_3D/             'Important Documents'/   NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.1.regtrans-ms                             Oracle/        'Start Menu'@         file2.txt
#  AppData/             Links/                  NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.2.regtrans-ms                             Pictures/       Templates@           file3.py
# 'Application Data'@  'Local Settings'@        NTUSER.DAT{d516d3ce-ea3e-11ef-9f60-d4f1e293f591}.TxR.blf                                       Postman/        VLC/                 ntuser.dat.LOG1
#  Contacts/            Movies/                 NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TM.blf                                        PrintHood@      Videos/              ntuser.dat.LOG2
#  Cookies@             Music/                  NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TMContainer00000000000000000001.regtrans-ms   Recent@         anaconda3/           ntuser.ini
#  Documents/          'My Documents'@          NTUSER.DAT{d516d3cf-ea3e-11ef-9f60-d4f1e293f591}.TMContainer00000000000000000002.regtrans-ms  'Saved Games'/   anaconda_projects/   source/
#  Downloads/           NTUSER.DAT              NetHood@                                                                                       Searches/       data/

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ cp file3.py data/file3.py         # cp => copy 'file3.py' to file in data-folder with name 'file3.py'.

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ ls data
# file3.py  file30.txt

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ touch file50.py

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ nano file50.py                   # nano => open that file in a 'nano' Environment. So, you can write 
                                     # anything in this '.py' file.

# Manas@LAPTOP-JSFT59N4 MINGW64 ~
# $ cat file50.py                    # cat => reads full 'file50.py' & gives us that file content.
# print("Hello, Hi there Manas")
