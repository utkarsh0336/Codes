# def print2(str1):
#     print2(str1)
#     print("This is " + str1)
#
# print2("Harry")
# n! = n * (n-1) * (n-2) * (n-3)..........1
# n! = n * (n-1)!
# def factorialIterative(n):
#     """
#
#        :param n: Integer
#        :return: n * (n-1) * (n-2) * (n-3)..........1
#        """
#     fac = 1
#     for i in range(n):
#         fac = fac * (i+1)
#     return fac
#
# number = int(input("Enter the number\n"))
# print("The factorial of the number is", factorialIterative(number))

# def FactorialRecursive(n):
#     if n == 1 or n == 0:
#         return 1
#     else:
#         return n * FactorialRecursive(n-1)
#
# number = int(input("Enter the number you want factorial of "))
# a = FactorialRecursive(number)
# print("The factorial of the number is", a)

def Fibo(n):
    if n == 1:
        return 0
    elif n ==2:
        return 1
    else:
        return Fibo(n-1)+Fibo(n-2)

n = int(input("Enter the number of term of Fibonacci term\n"))
# Fibo(n)
print("The", n ,"Fibonacci term is ", Fibo(n))





