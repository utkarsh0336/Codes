import random                               #Random variable gives us the random value as it is done here.
random_number = random.randint(0, 5)
# print(random_number)
# rand = random.random()   #This function generates a random value between 0 to 1.
# print(rand)
# rand = random.random() * 100   #This function generates a random value between 0 to 100.
# print(rand)
lst = ["Star Plus", "DD1", "Aaj Tak", "CodeWithHarry"]
a = random.choice(lst)   #This will print any random item from the list
print(a)
