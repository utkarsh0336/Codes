import random
print("Welcome to the Snake Water Gun")
print("Choose S for Snake\n", end="")
print("Choose W for Water\n", end="")
print("Choose G for Gun\n", end="")
print("You have 9 chances only")
options = ["S", "W", "G"]
n = 1
rand = random.choice(options)
while n!=9:
    print("Chance number ", n)
    n+=1
    inp = input("Choose your option\n")
    print("The computer has chosen", random.choice(options))
    if rand == "S" and inp == "S":
        print("Try Again!")
    elif rand == "S" and inp == "W":
        print("The winner is Computer!!!")
    elif rand == "S" and inp == "G":
        print("The winner is You!!!")
    elif rand == "W" and inp == "W":
        print("Try Again!")
    elif rand == "W" and inp == "S":
        print("The winner is You!!!")
    elif rand == "W" and inp == "G":
        print("The winner is Computer!!!")
    elif rand == "G" and inp == "G":
        print("Try Again!")
    elif rand == "G" and inp == "W":
        print("The winner is You!!!")
    elif rand == "G" and inp == "S":
        print("The winner is Computer!!!")
    else:
        print("You have given wrong input")











