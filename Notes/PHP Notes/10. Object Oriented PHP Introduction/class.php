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