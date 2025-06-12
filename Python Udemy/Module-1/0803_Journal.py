# Filename => date.txt & new file will Generate.
date = input("Enter today's date: ")
rate = input("Enter your today' mood: ")
content = input("Let your thoughts flow: ")

with open(f"{date}.txt", 'w') as file:
    file.writelines(rate + 2 * "\n")  # 2 * "\n" => Two Break lines.
    file.writelines(content + "\n")