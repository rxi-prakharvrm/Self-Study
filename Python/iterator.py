# An iterator is an object that contains a countable number of values.

def create_iterator(my_list):
    return iter(my_list)
    
i = create_iterator((1, 2, 3))

print(next(i))
print(next(i))
print(next(i))