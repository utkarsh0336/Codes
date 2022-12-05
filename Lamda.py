# #Lamda fuctions or anonymous functions
# def add(a, b):
#     return a + b
#
# # minus = lambda x, y: x-y
#                            #Line 5 and Line 8 and Line 9 are the same
#                            #Lamda is a one liner function or we can say anonymous function.
#
# def minus(x, y):
#      return x - y
#
# print(minus(9, 4))
# def a_first(a):
#     return a[1]


a = [[1, 14], [5, 6], [8, 23]]
a.sort(key = lambda x:x[1])
print(a)