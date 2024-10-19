# Generators differ from standard functions in that they allow you to iterate through a sequence of values over time, instead of computing and returning a single result.

# Suppose we create a stream of Fibonacci numbers, adopting the generator approach makes it trivial; we just have to call next(x) to get the next Fibonacci number without bothering about where or when the stream of numbers ends.

# def count(n):
#     i = 1
#     while i <= n:
#         yield i
#         i += 1

# for num in count():
#     print(num)

def simpleGeneratorFun():
    yield 1
    yield 2
    yield 3

# for num in simpleGeneratorFun():
#     print(num)

# Iterating over the generator using next
x = simpleGeneratorFun()

print(next(x))
print(next(x))
print(next(x))