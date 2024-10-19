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