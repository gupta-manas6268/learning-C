# File I/O => used to perform operations on a file.(read & write data)

f = open("702_demo.txt", "r")
data = f.read() # reads entire file.
print(data)
print(type(data))

line_1 = f.readline() # reads one line at a time
print(line_1)

line_2 = f.readline() # reads one line at a time
print(line_2)

f.write("I want to learn C++")

f.close()


# File I/O modes
# 'r' => open for reading(default)
# 'w' => open for writing, truncating the file first
# 'x' => create a new file & open it for writing
# 'a' => open for writing, appending to end of file if it exists
# 'a' => append.

# 'b' => binary mode
# 't' => text mode (default)
# '+' => open a disk file for updating (reading & writing)

# 'r+' => read + overwrite   (no truncate)
# 'w+' => write + overwrite  (truncate)
# 'a+' => read append        (no truncate)