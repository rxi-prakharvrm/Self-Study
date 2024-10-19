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
// $myObj->protectedVar = "Protected data"; // Error
// echo $myObj->protectedVar; // Error
// $myObj->protectedMethod(); // Error

// $myObj->privateVar = "Private data"; // Error
// echo $myObj->privateVar; // Error
// $myObj->privateMethod(); // Error
?>