print("Welcome to star pattern printing")
print("Enter 1 for upward star pattern")
print("Enter 0 for downward star pattern")
inp1 = int(input())
print("Enter the number of rows")  #number of rows = 4
inp = int(input())

print("The star pattern is\n")
if inp1 == 1:
    for i in range(0, inp + 1):  # Upward star pattern
        print(i * "*")

elif inp1 == 0:
    for i in range(0, inp):  ##Downward star pattern
        print(inp * "*")
        inp = inp - 1





