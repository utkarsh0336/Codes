# l = 10  #Global variable
# def function1(n):
#     # l = 5   #Local variable to this function.
#    # l = l+45  #Here we canoot change the value of l as it is a global variable
#     global l
#     l = l+45    #Here we can change the value of l as we have already defined or you can say we have taken the permission of changing the value of l(Global Variable) by using line number 5.
#     print(l)
#     print(n, "I have printed")
#
# function1("This is me")

x = 89
def harry():
    x = 20
    def rohan():
        global x
        x = 88
   # print("before calling rohan()", x)
    rohan()                   #Global function goes to the outer part of the program . So here x = 20 does not changes to 88 since it is itself under the function harry().So the global function goes to the outer part of the program and makes the variable x = 88 even if it is not present.
    print("after calling rohan()", x)
harry()
print(x)
