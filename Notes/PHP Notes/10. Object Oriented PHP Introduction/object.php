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
