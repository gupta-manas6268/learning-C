# Q1: Can Python open other types of files rather than .txt files?





























# Ans: First, you should know that there are two types of files, 
#       binary and non-binary. Non-binary files are files such as
#       .txt, .csv, .py, .html, .json, and any other file whose 
#       content can be viewed on any text editor program 
#       (e.g., Notepad, TextEdit, etc.).  You can read and write 
#       content in non-binary using the same open function. 
#     For example:
# 
#     file = open("home.html", 'w')
#     file.write("<html>\n <h1>This is the home page</h1>\n</html>")
#     file.close()

# The code above would create an HTML file. The content we wrote in that 
# file is HTML code, and HTML code is just non-binary content (i.e., text).

# On the other hand, examples of binary files are .xlsx, .mp4, .docx, and 
#  other files whose content cannot be correctly handled through a text editor. 
#  Such files need specific programs (i.e., Excel, Media Player, Microsoft Word, etc.)
#  that let users edit and view such files. Therefore, you cannot view the content of
#  such files in Python either. That being said, it is still possible to use the 
#  Python open function to handle such files. However, the use cases of handling
#  binary files are specific and rare. Therefore we will not cover the handling of
#  binary files right now and will focus on more crucial features of the language instead.