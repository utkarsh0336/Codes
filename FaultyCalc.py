print("Enter the first number")
n1 = int(input())
print("Enter the second number")
n2 = int(input())
print("Which operation you want to do")
n3 = input()
if n1 == 45 and n2 == 3 and n3 == '*':
    print("The answer is 555")
elif n1 == 56 and n2 == 6 and n3 == '+':
    print("The answer is 456")
elif n1 == 56 and n2 == 6 and n3 == '/':
    print("The answer is 78")
elif n3 == '+':
    print("The answer is ", n1 + n2)
elif n3 == '-':
    print("The answer is ", n1 - n2)
elif n3 == '*':
    print("The answer is ", n1 * n2)
elif n3 == '/':
    print("The answer is ", n1 /n2)
