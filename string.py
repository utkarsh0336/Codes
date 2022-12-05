mystr = "harry is a good boy"
#print(mystr[0:5:2])#Slicing means getting a particular letter from a string here 0 is including and 5 excluding
                 #0:4 means the string is copied from index 0 to 3(4 excluding)
                 #STRING FUNCTIONS
#print(len(mystr))
#print(mystr.isalnum())#isalnum()(Alpha numeric string means the string which has no blank spaces in between.)
#print(mystr.endswith("boy"))# gives true when the string ends with a true part of the string
#print(mystr.count("o"))#count function counts the number of a alphabet in a string.
print(mystr.capitalize())#This function capitalize the first letter of the string
print(mystr.find("is"))#This function gives the position of a part of a string.
print(mystr.lower())#This function lowers the letters of the string
print(mystr.upper())#This function uppers the letters of the string
print(mystr.replace("is", "are"))#This function is used to replace a part of the string with another part that is passed to the function