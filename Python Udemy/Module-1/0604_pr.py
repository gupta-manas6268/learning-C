# (This Q. is from 64. of Course Content)


# Q.1: For this exercise, download the members.txt file attached to the resources. Then, create a program that:
#       1. prompts the user to enter a new member.
#       2. adds that member to members.txt at the end of the existing members. For example, the user here has entered the member Solomon Right.
#  
#       In the above example, Solomon Right will be added to members.txt updating the content of the file to:
#       John Smith
#       Sen Lakmi
#       Sono Octonot
#       Solomon Right




























member = input("Add a new member: ")

file = open("0604_members.txt", 'r')
existing_members = file.readlines()
file.close()

existing_members.append("\n" + member)

file = open("0604_members.txt", 'w')
# existing_members = file.writelines(existing_members)  # Both lines 
file.writelines(existing_members)                       #  work well.
file.close()