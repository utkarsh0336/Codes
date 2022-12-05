a = 9
b = 8
c = sum((a , b))    #Bulit-in functions   sum function contains only tuple and lists.
print(c)

def function1():
    print("Hello You are in Function1()")


#function1()
#def function1(a, b):
#    print("Hello You are in Function1()", a + b)
#function1(a,b )

def function2(a, b):
    """This is a function which will calculate the average of two numbers"""   #This is called docstring(The First line that will explain the function.
    average = (a+b)/2
    print(average)
    return average  #After using return we can use line 19 to print the desired result.
v = function2(7,5)
print(v)
function2(7,5)
print(function2.__doc__)   #This will print the docstring of function2.