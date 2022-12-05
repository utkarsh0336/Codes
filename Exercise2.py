#Exercise2 - Faulty Calculator
#45 * 3= 555, 56+9 = 77, 56/6 = 4
#Design a calculator which will correctly solve all the problems except the following ones:
#45 * 3= 555, 56+9 = 77, 56/6 = 4
#Your program should take operator and the two numbers as input from the user and then return the result.
print("Calculator", "Enter first number")
(num1) = int(input())
print("Enter second number")
(num2) = int(input())
print("What would like to do?")
x = input()
if num1==45 and num2==3 and x=="*":
    print("555")
elif num1==56 and num2==9 and x=="+":
    print("77")
elif num1==56 and num2==6 and x=="/":
    print("4")
elif x=="+":
    num4=num1+num2
    print(num4)
elif x=="-":
    num5=num1-num2
    print(num5)
elif x=="*":
    num6=num1*num2
    print(num6)
elif x=="/":
    num7=num1/num2
    print(num7)
