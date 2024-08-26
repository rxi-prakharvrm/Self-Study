def main():
    f()

def f():
    num = 5
    print(num ^ 1)
    print(num ^ (2**num.bit_length()-1))

main()