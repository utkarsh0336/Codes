# Question 1
# num1 = int(input("Enter the Number 1\n"))
# num2 = int(input("Enter the Number 2\n"))
# num3 = int(input("Enter the Number 3\n"))
# num4 = int(input("Enter the Number 4\n"))
#
# if num1>num4:
#     m1 = num1
# else:
#     m1 = num4
#
# if num2>num3:
#     m2 = num2
# else:
#     m2 = num3
#
# if m1>m2:
#     print("The Greatest number is " + str(m1))
# else:
#     print("The Greatest number is " + str(m2))

# Question 2
# m1 = int(input("Enter the marks of Computer Science\n"))
# m2 = int(input("Enter the marks of Maths\n"))
# m3 = int(input("Enter the marks of Science\n"))
#
# m1per = (m1/50)*100
# m2per = (m2/50)*100
# m3per = (m3/50)*100
# percent = ((m1+m2+m3)/150)*100
# if percent >= 40 and m1per >= 33 and m2per >= 33 and m3per >= 33:
#     print("You are pass !!! Congratulations")
# else:
#     print("Opps!! Better Luck Next Time")

# Question 3

# inp = input("Enter your Comment\n")
# if inp.__contains__("make a lot of money") or inp.__contains__("subscribe this") or inp.__contains__("buy now") or inp.__contains__("click this"):
#     print("It is a spam")
# else:
#     print("Continue")

# Question 4

# inp = input("Enter your username\n")
# if len(inp) < 10:
#     print("It is less than 10")
# else:
#     print('It is greater than 10')

# Qusetion 5

# l1 = ["Utkarsh","Aditi","Shubham","Sonal","Sanjana","Shivangi","Salvi","Abhiraj"]
# name = input("Enter the name of the Person\n")
# if name in l1:
#     print("Yes it is present")
# else:
#     print("No it is not present")

# Question 6

# marks = int(input("Enter the marks\n"))
# if marks > 90 and marks < 100:
#     print("Excellent")
# elif marks > 80 and marks < 90:
#     print("A")
# elif marks > 70 and marks < 80:
#     print("B")
# elif marks > 60 and marks < 70:
#     print("C")
# elif marks > 50 and marks < 60:
#     print("D")
# elif marks < 50:
#     print("F")

# Question 7

# s1 = input("Enter the Post\n")
# if s1.count("Harry") == 1 or s1.count("harry"):
#     print("This post is talking about Harry")
# else:
#     print("This post is not talking about Harry")