num1 = input("Enter Num 1\n")
num2 = input("Enter Num 2\n")
try:
    print("The sum of Num 1 and Num 2 is", int(num1) + int(num2))

except Exception as e:
    print(e)

print("This line is very important")

#Try except is used to keep executing the code if any error is found in the program.