# C++ Tokens

In C++, tokens can be defined as the smallest building blocks of c++ programs that the compiler understands. Every word in c++ code can be considered as a token.

## Types of tokens in C++

1. Identifiers
2. Keywords
3. Constants
4. Strings
5. Special Symbols
6. Operators

![Tokens in C](https://media.geeksforgeeks.org/wp-content/uploads/20230808152244/Tokens-in-C.png)

**1. Identifiers**: In C++, entities like variables, functions, classes or structs must be given unique names within the program so that they can be uniquely identified. The unique names given to these entities are known as identifiers.

**2. Keywords**: In C++, keywords are the reserved words that have their specific meaning and functionalities within the program. Keywords cannot be used as an identifier in the program to name any variable.

There are 95 words in C++:

| Keywords       | | | | |
| -------------- | -------------- | -------------- | -------------- | -------------- |
| `break`        | `try`          | `catch`        | `char`         | `class`        |
| `const`        | `continue`     | `default`      | `delete`       | `auto`         |
| `else`         | `friend`       | `for`          | `float`        | `long`         |
| `new`          | `operator`     | `private`      | `protected`    | `public`       |
| `return`       | `short`        | `sizeof`       | `static`       | `this`         |
| `typedef`      | `enum`         | `throw`        | `mutable`      | `struct`       |
| `case`         | `register`     | `switch`       | `and`          | `or`           |
| `namespace`    | `static_cast`  | `goto`         | `not`          | `xor`          |
| `bool`         | `do`           | `double`       | `int`          | `unsigned`     |
| `void`         | `virtual`      | `union`        | `while`        |                |

**3. Constants**: Constants are the tokens in C++ that are used to define variables at the time of initialization and the assigned value cannot be changed after that.

We can define constants in C++ in two ways-

- using ```const``` keyword
- using ```define``` keyword.

**i. Define Constants using the ‘const’ Keyword in C++**
Constants are the values that do not change during the execution of the program once defined. We can make constant any type of data such as integer, float, string, and characters. A literal is a constant value assigned to a constant variable.

**Syntax**

```const data_type variable_name = value;```

**ii. Define Constants using the ‘#define’ preprocessor directive in C++**
#define preprocessor can be used to define constant identifiers and the identifier is replaced with the defined value throughout the program where ever it is used. It is defined globally outside the main function.

**Syntax**

// The constant_Name is replaced by its value throughout the program where ever it is used
```#define constant_Name value```

**4. Strings**: In C++, a string is not a built-in data type like ‘int’, ‘char’, or ‘float’. It is a class available in the STL library which provides the functionality to work with a sequence of characters, that represents a string of text.

**Syntax of declaring a string**

```string variable_name;```

Initialize the string object with string within the double inverted commas (“).

```string variable_name = "This is string";```

