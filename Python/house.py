name = input("What's your name? ")

match name:
    case "Harry" | "Varun" | "Virat":
        print("Gryffindor")
    case "Shyam":
        print("Slytherin")
    case _:
        print("Who?")