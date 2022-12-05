#Dictionary is nothing but key-value pairs
d1 = {}
#print(type(d1))
d2 = {"Harry":"Burger", "Rohan":"Fish", "Shubham":"Roti"
      , "SkillF":{"B":"Maggie", "L":"roti", "D":"Chicken"}}
d2["Ankit"] = "Junk Food"
d2[420] = "Kebabs"  #Also used to add a key-value pair like in line 12.
del d2[420]     #del is used to delete the passed key-value pairs of the dictionary.
#print(d2["SkillF"]["B"])   #We can have key-pair values as dictionary also Keys should be number or a string.
#print(d2)
#print(d2.get("Harry"))   #get is used to take a value of a key from the dictionary.
#d2.update({"Leena":"Toffee"})   #update() is used to add a key-value pair.
#print(d2)
#print(d2.keys())  #All the keys are printed of the dictionary.
print(d2.items())   #All the items are printed of the dictionary.