#f = open("Utkarsh2.txt", "w")
#f.write("Utkarsh bhai bhaut acche hai\n")
# The content of Utkarsh.txt gets replaced with the Statement passed in f.write("")
# New file is automatically created
# f = open("Utkarsh2.txt", "a")
# f.write("Utkarsh bhai bhaut acche hai\n")
# f = open("Utkarsh2.txt", "a")
# f.write("Utkarsh bhai bhaut acche hai\n")
#Appending means addition at the end.It will keep on adding the string as the number of times I keep on passing it.
# a = f.write("Utkarsh bhai bhaut acche hai\n")
# print(a)   #This prints the number of characters inputted in the file.
# Handle read and write both
f = open("Utkarsh2.txt", "r+")
print(f.read())

f.write("Thank you")

f.close()


f.close()