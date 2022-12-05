s = set()
#print(type(s))
# s_from_list = set([1, 2, 3, 4])
# #print(s_from_list)
#print(type(s))
s.add(1)
s.add(9)
s1 = {4, 6}
print(s.isdisjoint(s1))
s.remove(9)
print(s)
s1.add(1)

