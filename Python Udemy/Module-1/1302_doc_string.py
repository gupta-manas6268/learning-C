text = """sum function is used to sum two float variables."""

def sum(a, b):
    # text # Not used, so type 'doc_string' inside function.
    # text = """sum function is used to sum two float variables."""
    """sum function is used to sum two float variables."""

    ans = float(a) + float(b)
    return ans

help(sum)
print(help(sum), " Hi")
print(text)

text_2 = "why is \n" \
"there so much " \
"pollution."
print(text_2) # In ""(single quote) string, multiple line string is
              # converted to single line, if '\n' isn't there.

text_3 = """But in triple quote 
            string, multiple line string
            will not convert to single line."""
print(text_3)
with open("1302_file.txt", 'w') as file:
    file.write(text_3) # write's in mutltiple lines in file.