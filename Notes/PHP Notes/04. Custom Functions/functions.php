<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Functions</title>
</head>
<body>
    <?php
    function printHelloWorld() {
        echo "Hello World" . "<br>";
        calculateSum(23, 32);
    }

    function calculateSum($num1, $num2) {
        $sum = $num1 + $num2;
        echo "The sum is: " . $sum;
    }

    printHelloWorld();
    ?>
</body>
</html>