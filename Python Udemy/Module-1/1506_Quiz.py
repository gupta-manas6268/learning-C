import json

# "1506_Questions.json" => has List of Dictionary.
with open("1506_Questions.json", 'r') as file:
    content = file.read() # String

data = json.loads(content) # List => String to List conversion.

# print(type(content))  # Also run when
# print(type(data))     # you uncomment these lines.

score = 0
for Question in data:
    print(Question["Question_text"])
    for index, Alternatives in enumerate(Question["Alternatives"]):
        print(index + 1, "-", Alternatives)
    user_choice = int(input("Enter your answer: "))

    Question["user_choice"] = user_choice
    if Question["user_choice"] == Question["Correct_Answer"]:
        score += 1


print(data)

for Question in data:
    message = f"Your answer: {Question['user_choice']}, "\
              f"Correct answer: {Question['Correct_Answer']}" 
    # '\'=> in above line, for multi-line string.
    print(message)
    
print(score, "/", len(data))