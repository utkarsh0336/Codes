# Pattern Printing
# Input = Integer n
# Boolean = True or False.
# True n = 4   n = number of rows.
# *    (Print this Star Pattern).
# **
# ***
# ****

# False
# ****
# ***
# **
# *

row = int(input("Enter the number of rows\n"))

for i in range(row):
    print(i*"*")

for j in range(row):
    print((row-j)*"*")



