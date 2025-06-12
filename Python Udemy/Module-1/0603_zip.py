# Run this code in when your VS-code is in Path, 'Python Udemy' 
#  only, not in 'Module-1'.



contents = ["All carrots are to be sliced "
            "longitudinally.",   
            # Here string is "All carrots are to be sliced longitudinally".
            "The carrots were reportedly sliced.", 
            "The slicing process was well presented"]
filenames = ["0603_doc.txt", "0603_report.txt", "0603_presentation.txt"]

for content, filename in zip(contents, filenames):
    # file = open(f"/Files/{filename}", 'w') # This line without '.' gives error, because
    file = open(f"./Files/{filename}", 'w')  #  '.' takes us one step up in file path.
    file.write(content)




# String in multiple lines.
a = "I am a string" \
    "on my" \
    "own"

print(a)