# F Strings
import math
me = "Utkarsh"
a1 = 3
a = "This is %s"%me  #A way to String formatting
print(a)
# b = "This is %s %s"%(me, a1)  #Another way of string formatting
# print(b)
# c = "This is {1} {0}" #This 0 and 1 will store the elements in the passed order as given.
# d = c.format(me, a1)  # Another way of String Formatting.
# print(d)
print(f"This is my country {me} {a1} {4*5} {math.cos(65)}")
#Here in line 11 I have written a Fstring where I can pass the variable name as shown to print the items.

