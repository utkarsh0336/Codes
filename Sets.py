s = set()
#print(type(s))
#s_from_list = set({1, 2, 3, 4})
#print(s_from_list)
#print(type(s_from_list))
s.add(1)     #Set retains the unique value.
s.add(1)
s.add(2)
s1 = s.union({1, 2, 3})   #Can perform union operation in sets
print(s,s1)
s2 = s.intersection({1, 2, 3})   #Can perform intersection operation in sets
print(s,s2)                     #len,min,max gives the length,minimum value and maximum value respectively.
print(s.isdisjoint(s1))
s.remove(2)                      #To remove a element from the set.
print(s)