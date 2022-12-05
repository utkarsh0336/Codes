import turtle,random
colors = ["green", "brown"]

c = turtle.Turtle()
# c.color("green")
c.forward(100)
c.left(45)
c.color("blue")
c.forward(100)
c.left(45)
c.color("yellow")
c.forward(100)
c.left(45)
c.color("purple")
c.forward(100)
c.left(45)
c.color("pink")
c.forward(100)
c.left(45)
c.color("black")
c.forward(100)
c.color("red")
c.left(45)
c.forward(100)
c.color("orange")
c.left(45)
c.forward(100)

for i in range(300):
    c.forward(i)
    c.left(45)
    c.circle(i)
    c.forward(i)



# c.color("red")

turtle.done()