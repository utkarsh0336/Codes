#var1 = "Hello world " #Creating a variable (String Variable)
#print(var1) #Printing a variable 1 (String)
#var2 = 4 #It is a integer variable
#var3 = 36.7 #It is a floating point variable
#print(type(var3)) #Type function can be used to give the data type of a variable
#print(var2+var3)
#var4 = "32"
#print(var1 + var4)
#print(5 * str(int(var4)  + int(var3)))#Typecasting like int(variable name).....That's it..
"""
str()
float()
int()
are the data types which we can use in typecasting
"""
"""
Quiz - Solved in the video
Exercise - Next video
Project - 
"""
#print("Enter your number")
#inpnum = input()   # For taking an input from the user. input() only string as an input
#print("The number you entered is",inpnum)   # For printing the number
#print("The number you entered is",inpnum + "Utkarsh")
#print("The number you entered is",int(inpnum)+10) #After typecasting the str to int we can use it to add an integer value

#print(10*"HelloWorld\n ")#printing the same line for n number of times
print("Enter the first number")
inpnum1 = input()
print("Enter the second number")    #Calculator Simple addition
inpnum2 = input()
print("The addition is ", int(inpnum1) + int(inpnum2))