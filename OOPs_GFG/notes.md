# Friend Functions and Classes

A friend class can access private and protected members of other classes in which it is declared as a friend.

## Some important points

- We can declare friend class or function anywhere in the base class body whether its private, protected or public block. It works all the same.
  
- Like a friend class, a friend function can be granted special access to private and protected members of a class in C++. They are the non-member functions that can access and manipulate the private and protected members of the class for they are declared as friends.
  
- We can declare any global function as a friend function.

- The order in which we define the friend function of another class is important and should be taken care of. We always have to define both the classes before the function definition. Thats why we have used out of class member function definition.

- Friends should be used only for limited purposes. Too many functions or external classes are declared as friends of a class with protected or private data access lessens the value of encapsulation of separate classes in object-oriented programming.

- Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.

## Features of a Friend Function

- A friend function is a special function in C++ that in spite of not being a member function of a class has the privilege to access the private and protected data of a class.

- A friend function is a non-member function or ordinary function of a class, which is declared as a friend using the keyword “friend” inside the class. By declaring a function as a friend, all the access permissions are given to the function.

- The keyword “friend” is placed only in the function declaration of the friend function and not in the function definition or call.

- A friend function is called like an ordinary function. It cannot be called using the object name and dot operator. However, it may accept the object as an argument whose value it wants to access.

- A friend function can be declared in any section of the class i.e. public or private or protected.

## Advantages of Friend Function

- A friend function is able to access members without the need of inheriting the class.

- The friend function acts as a bridge between two classes by accessing their private data.

- It can be used to increase the versatility of overloaded operators.

- It can be declared either in the public or private or protected part of the class.

## Disadvantages of Friend Functions

- Friend functions have access to private members of a class from outside the class which violates the law of data hiding.

- Friend functions cannot do any run-time polymorphism in their members.