# Static Data Members

Static data members are class members that are declared using static keywords. A static member has certain special characteristics which are as follows:

- Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.

- It is initialized before any object of this class is created, even before the main starts.

- It is visible only within the class, but its lifetime is the entire program.

## Important points

- Static members are only declared in a class declaration, not defined. They must be explicitly defined outside the class using the scope resolution operator.

- Static data members can only be defined globally in C++. The only exception to this are static const data members of integral type which can be initialized in the class declaration.
