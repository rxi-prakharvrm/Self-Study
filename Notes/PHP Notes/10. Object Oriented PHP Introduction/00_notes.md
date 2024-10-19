# Object Oriented Programming in PHP

___

## Class

In PHP, a class is a blueprint for creating objects, which are instances of that class. It defines a set of properties (variables) and methods (functions) that represent the characteristics and behaviors of the objects created from it. Classes are fundamental to object-oriented programming (OOP) in PHP, allowing you to create modular, reusable, and organized code.

```class.php```

```php
<?php
class ClassName {
    // Properties (variables)
    public $property1;
    private $property2;
    protected $property3;
    
    // Methods (functions)
    public function method1() {
        // Method implementation
    }
    
    private function method2() {
        // Method implementation
    }
    
    protected function method3() {
        // Method implementation
    }
    
    // Constructor (special method called when an object is created)
    public function __construct() {
        // Constructor implementation
    }
    
    // Destructor (special method called when an object is destroyed)
    public function __destruct() {
        // Destructor implementation
    }
}

if(class_exists("ClassName")) {
    echo "Class exists!<br>";
} else {
    echo "Class doesn't exists!<br>";
}

if(method_exists("method1", "ClassName")) {
    echo "Method exists!<br>";
} else {
    echo "Method doesn't exists!<br>";
}
?>

```

1. **Class name**: ClassName is the name of the class, which should start with a capital letter.

2. **Properties**: These are variables defined within the class. In PHP, properties have visibility levels, which can be public, private, or protected. public properties are accessible from outside the class, private properties are only accessible from within the class itself, and protected properties are accessible from within the class and its subclasses (inheritance).

3. **Methods**: These are functions defined within the class. Like properties, methods can also have visibility levels (public, private, or protected). public methods are accessible from outside the class, private methods are only accessible from within the class itself, and protected methods are accessible from within the class and its subclasses (inheritance).

4. **Constructor**: The __construct() method is a special method called when an object of the class is created. It is used to initialize the object's properties or perform any setup required.

5. **Destructor**: The __destruct() method is a special method called when an object is destroyed (usually when it goes out of scope or explicitly unset). It can be used to perform cleanup tasks.

**Note:** We have a function ```class_exists("Class_name")``` that checks if the class(named ```Class_name```) exists or not.

**Note:** We have a function ```method_exists("Method_name")``` that checks if the method(named ```Method-name```) exists or not.

### Methods and Properties

```methods_properties.php```

```php
<?php
// Defining the class Car
class Car {
    // Properties
    var $wheels = 4;
    var $hood = 1;
    var $engine = 1;
    var $door = 4;

    // constructor function
    function __construct() {}

    // Methods
    function MoovWheels($car_name) {
        echo "$car_name is moving!<br>";
    }
}

// first instance of car
$bmw = new Car();
$bmw->engine = 2;

echo "I have a BMW car which has $bmw->engine engines.<br>";
$bmw->MoovWheels("BMW");

// Second instance of car
$ferrari = new Car();
$ferrari->door = 2;

echo "I have ferrari with $ferrari->door doors.<br>";
$ferrari->MoovWheels("Ferrari");
?>
```

## Objects

In PHP, objects are instances of classes, and they are fundamental to object-oriented programming (OOP). When you create a class, you are essentially defining a blueprint for creating objects. Each object represents a specific entity with its own set of properties (variables) and methods (functions).

Creating an object involves two steps:

1. **Defining a Class:** You define a class using the class keyword followed by the class name and a set of properties and methods enclosed in curly braces.

2. **Creating an Object:** Once the class is defined, you can create an object (instance) of that class using the new keyword followed by the class name and parentheses.

```object.php```

```php
<?php
class Dog {
    // Properties
    public $name;
    public $age;

    // Method
    public function bark() {
        echo "Woof! Woof!";
    }
}

// Create an instance of the class Dog
$dog1 = new Dog();

// Access properties and call methods of the object
$dog1->name = "Buddy";
$dog1->age = 3;
echo $dog1->name . " is " . $dog1->age . " years old.";
$dog1->bark(); // Output: Woof! Woof!
?>
```

## Inheritance

```inheritance.php```

```php
<?php
class Car {
    var $wheels = 4;
    var $hood = 1;
    var $engine = 1;
    var $door = 4;

    function MoovWheels($car_name) {
        echo "$car_name is moving!<br>";
    }
}

class GasCar extends Car {
    var $engine = 1;
    var $fuel_type = "Gas";
}

$WagonR = new GasCar();
echo "WagonR is a $WagonR->fuel_type car. <br>";

class ElectricCar extends Car {
    var $engine = 0;
    var $fuel_type = "Electric";
}

$tesla = new ElectricCar();
echo "Tesla is an " . $tesla->fuel_type . " car. <br>";
```

## Constructors

In PHP, constructors are special methods in a class that are automatically called when an object of that class is created using the new keyword.

```constructors.php```

```php
<?php
class Car {
    var $car_name;
    var $wheels = 4;
    var $hood = 1;
    var $engine = 1;
    var $door = 4;

    public function __construct($name) {
        $this->car_name = $name;
    }
    

    function MoovWheels() {
        echo "$this->car_name is moving!<br>";
    }
}

// first instance of car
$bmw = new Car("BMW");
$bmw->engine = 2;

echo "I have a $bmw->car_name car which has $bmw->engine engines.<br>";
$bmw->MoovWheels("BMW");

// Second instance of car
$ferrari = new Car("Ferrari");
$ferrari->door = 2;

echo "I have $ferrari->car_name with $ferrari->door doors.<br>";
$ferrari->MoovWheels("Ferrari");
```

**Note:** ```function __construct()``` is used to define a constructor inside a class.

**Note:** In PHP, the ```$this``` keyword refers to the current instance of the class within a class context. It is a special variable used to access the properties and methods of the object that is currently being operated upon.

## Access Modifiers

In PHP, access modifiers are used to control the visibility and accessibility of class properties (variables) and methods (functions) within the class and its subclasses (if any). PHP supports three main access modifiers:

1. **Public:** When a class member is declared as public, it can be accessed from anywhere, including outside the class and its subclasses.

2. **Protected:** When a class member is declared as protected, it can only be accessed from within the class itself and its subclasses. Outside the class and its subclasses, the protected member is not accessible.

3. **Private:** When a class member is declared as private, it can only be accessed from within the class itself. It is not accessible from outside the class or its subclasses.

```access_modifiers.php```

```php
<?php
class MyClass {
    public $publicVar;      // Public property
    protected $protectedVar;  // Protected property
    private $privateVar;    // Private property

    public function publicMethod() {
        // Public method
    }

    protected function protectedMethod() {
        // Protected method
    }

    private function privateMethod() {
        // Private method
    }
}

$myObj = new MyClass();

// Accessing public property and method
$myObj->publicVar = "Public data";
echo $myObj->publicVar; // Output: "Public data"
$myObj->publicMethod(); // Output: (Whatever the public method does)

// Trying to access protected and private properties and methods outside the class (will result in an error)
$myObj->protectedVar = "Protected data"; // Error
echo $myObj->protectedVar; // Error
$myObj->protectedMethod(); // Error

$myObj->privateVar = "Private data"; // Error
echo $myObj->privateVar; // Error
$myObj->privateMethod(); // Error
?>
```

## Static Modifiers

In PHP, the `static` keyword is used to declare class members (properties and methods) that belong to the class itself rather than to instances of the class. These static members are shared among all instances of the class, and they can be accessed directly using the class name without creating an object of the class.

Static Properties:
To declare a static property, use the `static` keyword before the property declaration. Static properties are initialized only once, regardless of how many instances of the class are created.

```php
class MyClass {
    public static $staticProperty = 0;

    public function incrementStaticProperty() {
        self::$staticProperty++; // Accessing static property using self keyword
    }
}

// Accessing static property without creating an object
echo MyClass::$staticProperty; // Output: 0

$object1 = new MyClass();
$object1->incrementStaticProperty();

$object2 = new MyClass();
$object2->incrementStaticProperty();

// Static property is shared between instances
echo MyClass::$staticProperty; // Output: 2
```

Static Methods:
To declare a static method, also use the `static` keyword before the method declaration. Static methods can be called directly using the class name, without the need to create an object.

```php
class MyClass {
    public static function staticMethod() {
        return "This is a static method.";
    }
}

// Calling the static method without creating an object
echo MyClass::staticMethod(); // Output: "This is a static method."
```

Static methods cannot access non-static (instance) properties or methods directly using `$this`, as they are not associated with any particular instance.

Static methods and properties are often used for utility functions or to keep track of shared state across instances of the class. However, use them judiciously, as excessive use of static members can lead to tightly coupled code and hinder testability and maintainability.
