#var1 = 6
#var2 = 56

#var3 = int(input())
                             #SYNTAX OF IF ELSE OR ELIF LADDER#
#if var3>var2:
#    print("Greater")
#elif var2 == var3:  #When only one condition is true then it will not check the other conditions when elif is used.
#    print("Equal")
#else:
#    print("Lesser")

#list1 = [1,2,3,4,5]
#if 5 in list1:                #in keyword is used to check whether the given element is in the list or not.
 #   print("Yes 5 is in the list")
#print(5 in list1)        #gives TRUE value if 5 in list1 otherwise will give false value.
#print(15 not in list1)   #not in keyword is used to check whether the given element is not in the list.
print("Enter the age")
age = int(input())
if age > 18:
    print("You can drive a car")
elif age == 18:
    print("We can't decide you can drive or not")
else:
    print("You can't drive a car")