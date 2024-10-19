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