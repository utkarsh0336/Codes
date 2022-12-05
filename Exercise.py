d1 = {"Abandon":"Cancelled or Terminated", "Mutable":"That can change", "Immutable":"That cannot change",
      "Geology":"Study of Earth", "Python":"Study of new era", "Cricket":"A Game"}
print("Enter your word")
x = input()
print("It's meaning is ", d1.get(x))