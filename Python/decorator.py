def greet_decorator(greet):
    def wrapper(name):
        greet(name)
        print("Nice to meet you!")
    return wrapper

@greet_decorator
def greet(name):
    print("Hello ", name, "!", sep="")

greet("Joe")