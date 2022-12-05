grocery = ["Harpic" , "Vim bar" , "Deodrant" , "Bhindhi" , "Lollypop" , 56]
numbers = [2,7,9,11,3]
print(numbers[1:5:-1])#we can do slicing or can access any element like string functions in lists also.
                    #Never put less than -1 or negative numbers in the slicing part at the end if the first two parts are pre occupied.(It will not work)
print(numbers)    #Slicing does not affect the original list of numbers but sort or reverse change the original list

numbers.sort()     #Can sort the numbers in ascending order(Change the original list)
print("The numbers in ascending order are",numbers)
numbers.sort()
numbers.reverse()    #Can sort the numbers in descending order(Change the original list)
                     #Slicing returns a list
print("The numbers in descending order are",numbers)
print(len(numbers))    #len() measures the size of the list
print(max(numbers))    #max() gives the largest value of the list
print(min(numbers))    #min() gives the smallest value of the list
numbers.append(10)     #append() only adds the element at the end
print(numbers)
numbers.insert(3,12)   #insert() function adds a new value in between [<listname>.insert(index at which you waant to insert,new value)
print(numbers)
numbers.remove(9)      #remove() function s removes the value from the list.
print(numbers)
numbers.pop()          #pop() function chop off the value of the list.
print(numbers)
numbers[1] = 98       #We can replace the value of the list from the another value like this.
print(numbers)
#Mutable - Can change   Lists are mutable
#Immutable - Cannot change    Tuple tp = () are immutable
tp = (1, 2, 3)     #It is different from the list(as the list contains the square bracket but in tuple, it contains parenthesis.)
#tp[1] = 8          We cannot change the value of a tuple(It is immutable)
tp = (1,)          #tuple of one element is made like this(by putting a comma after the element otherwise the element would be printed without the parenthesis)
print(tp)
a = 1
b = 8
temp = a
a = b
b = temp
print(a,b)
a = 3
b = 4
a , b = b , a
print(a,b)