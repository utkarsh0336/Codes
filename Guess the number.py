n = 18
guess = 9
print("Guess the number less than 100")
print("You have total 9 Guesses to make")
inp = int(input())

while 1:
    guess = guess - 1
    if guess == 1:
        print("Oops!! GAME OVER!!")
        break
    elif inp > 18:
        print("Enter the value less than ", inp)
        print("Guesses left ", guess - 1)
        inp = int(input())
        continue

    elif inp < 18:
        print("Enter the value more than ", inp)
        print("Guesses left ", guess - 1)
        inp = int(input())
        continue
    else:
        print("You won!!! Guessed the right number")
        break







