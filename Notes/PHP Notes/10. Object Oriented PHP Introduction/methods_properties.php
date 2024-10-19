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