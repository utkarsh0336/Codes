# def function_name_print(a, b, c, d, e):
    # print(a, b, c, d, e)

#Convention is that we have to put def func_name(normal,args,kwargs) args and kwargs are optional.
def funargs(normal, *args, **kwargs):
    print(normal, end="")

    for item in args:
        print(item)
    print("\nNow I would to like to introduce some of ours heroes")
    for key, value in kwargs.items():
        print(f"{key} is a {value}")
        # print(key, value)
    print(type(args))

# function_name_print("Harry", "Rohan", "SkillF", "Hammad", "Shivam")
har = ["Harry", "Rohan", "SkillF", "Hammad", "Shivam", "The Programmer"]
normal = "I am a normal argument and the students are:"
kw = {"Rohan":"Monitor", "Utkarsh":"Boss", "The Programmer":"Coordinator", "Shivam":"Cook"}
funargs(normal, *har, **kw)