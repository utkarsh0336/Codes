f = open("Utkarsh.txt", "rt")  #file pointer f = open("filename.extension", "mode")
#content = f.read()    #f.read(number of characters it reads)   if not filled then by default it will take all the characters.
# print(content)
# content = f.read(3)    # if i do this then it will take the further characters of the string
# print(content)           #if i put values of f.read(more than the number of characters of the string) then it will take only once the whole string.
#
# content = f.read(344)    #f.read(number of characters it reads)   if not filled then by default it will take all the characters.
# print(content)
# content = f.read(344)    # if i do this then it will take the further characters of the string
# print(content)
#
# content = f.read(3)    #f.read(number of characters it reads)   if not filled then by default it will take all the characters.
# print("1", content)
# content = f.read(3)    # if i do this then it will take the further characters of the string
# print("2", content)
# for line in f:
#     print(line, end=" ")
# print(f.readline())
# print(f.readline())    #This function reads line line string.
#print(f.readline())
print(f.readlines())   #This function prints the list of lines of the string.

f.close()