<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Functions</title>
</head>
<body>
    <?php
    function init() {
        $number1 = 50;
        $number2 = 25;
        calculateSum($number1, $number2);
        calculateSub($number1, $number2);
        calculateMul($number1, $number2);
        calculateDiv($number1, $number2);
        calculateRem($number1, $number2);
    }

    function calculateSum($num1, $num2) {
        $sum = $num1 + $num2;
        echo "The sum is: " . $sum . "<br>";
    }

    function calculateSub($num1, $num2) {
        $sum = $num1 - $num2;
        echo "The sum is: " . $sum . "<br>";
    }

    function calculateMul($num1, $num2) {
        $sum = $num1 * $num2;
        echo "The sum is: " . $sum . "<br>";
    }

    function calculateDiv($num1, $num2) {
        $sum = $num1 / $num2;
        echo "The sum is: " . $sum . "<br>";
    }

    function calculateRem($num1, $num2) {
        $sum = $num1 % $num2;
        echo "The sum is: " . $sum . "<br>";
    }

    init();
    
    ?>
</body>
</html>