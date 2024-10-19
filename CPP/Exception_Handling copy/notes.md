# Exception Handling

## What is Exception?

Conditions responsible for creating errors during the execution of a program are known as Exceptions. These errors can interrupt the execution of the program and if the program can’t handle these exceptions then OS handles them and the program is terminated abruptly.

## Exception Handling in C++

Exception handling in C++ consist of three keywords: try, ```throw``` and ```catch```:

The ```try``` statement allows you to define a block of code to be tested for errors while it is being executed.

The ```throw``` keyword throws an exception when a problem is detected, which lets us create a custom error.

The ```catch``` statement allows you to define a block of code to be executed, if an error occurs in the ```try``` block.

The ```try``` and ```catch``` keywords come in pairs:

### Syntax

```cpp

try {
  // Block of code to try
  throw exception; // Throw an exception when a problem arise
}
catch () {
  // Block of code to handle errors
}

```

### Example_01

```cpp
try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw (age);
  }
}
catch (int myNum) {
  cout << "Access denied - You must be at least 18 years old.\n";
  cout << "Age is: " << myNum;
}
```

#### Output

```bash
Access denied - You must be at least 18 years old.
Age is: 15
```

### Example_02

You can also use the throw keyword to output a reference number, like a custom error number/code for organizing purposes:

```cpp
try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw 505;
  }
}
catch (int myNum) {
  cout << "Access denied - You must be at least 18 years old.\n";
  cout << "Error number: " << myNum;
}
```

#### Output

```bash
Access denied - You must be at least 18 years old.
Error number: 505
```

### Example_03

## Handle Any Type of Exceptions (...)

If you do not know the throw type used in the try block, you can use the "three dots" syntax (...) inside the catch block, which will handle any type of exception:

```cpp
try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw 505;
  }
}
catch (...) {
  cout << "Access denied - You must be at least 18 years old.\n";
}
```

#### Output

```bash
Access denied - You must be at least 18 years old.
```
