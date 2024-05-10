# Constructors in C++

- Constructor is a member function of a class, whose name is same as the class name.

- Constructor is a special type of member function that is used to initialize the data members for an object of a class automatically, when an object of the same class is created.

- Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object that is why it is known as constructor.

- Constructor do not return value, hence they do not have a return type.

- Constructors can be overloaded.

- Constructor can not be declared virtual.

- It must be placed in public section of class.

- If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body).

- Constructor cannot be inherited.

- Addresses of Constructor cannot be referred.

- Constructor make implicit calls to new and delete operators during memory allocation.

- Even if we do not define any constructor explicitly, the compiler will automatically provide a default constructor implicitly.

- When an object is declared in a parameterized constructor, the initial values have to be passed as arguments to the constructor function. The normal way of object declaration may not work. The constructors can be called explicitly or implicitly.\

```cpp
Example e = Example(0, 50); // Explicit call
Example e(0, 50);           // Implicit call
```

- Whenever we define one or more non-default constructors( with parameters ) for a class, a default constructor( without parameters ) should also be explicitly defined as the compiler will not provide a default constructor in this case. However, it is not necessary but it’s considered to be the best practice to always define a default constructor. 

- Copy constructor takes a reference to an object of the same class as an argument.

## Destructor

A destructor is also a special member function as a constructor. Destructor destroys the class objects created by the constructor. Destructor has the same name as their class name preceded by a tilde (~) symbol. It is not possible to define more than one destructor. The destructor is only one way to destroy the object created by the constructor. Hence destructor can-not be overloaded. Destructor neither requires any argument nor returns any value. It is automatically called when the object goes out of scope.  Destructors release memory space occupied by the objects created by the constructor. In destructor, objects are destroyed in the reverse of object creation.
