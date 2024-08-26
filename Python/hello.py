def main():
    name = input("Enter you name: ").strip().title()
    hello(name)

def hello(to="world"):
    print(f"Hello {to}")

main()