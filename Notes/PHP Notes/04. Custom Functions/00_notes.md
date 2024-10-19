## Custom Functions

<pre>functions.php</pre>

```php
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
    }

    printHelloWorld();
    ?>
</body>
</html>
```

### Function Parameters

<pre>function_parameters.php</pre>

```php
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
```

### Return Function

<pre>return_function.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Return Functions</title>
</head>
<body>
    <?php
    function main() {
        $height_in_meters = 1.64;
        $weight_in_kgs = 50;
        echo calculateBMI($height_in_meters, $weight_in_kgs);
    }

    function calculateBMI($height_in_meters, $weight_in_kgs) {
        $bmi = $weight_in_kgs / ($height_in_meters * $height_in_meters);
        return $bmi;
    }

    main();
    ?>
</body>
</html>
```

### Variable Scopes

<pre>scope.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Variable Scope</title>
</head>
<body>
    <?php
    /* Global variable $x will not be converted into the value of the variable inside the convert function */

    echo "<h2>Before 'global' keyword</h2>";

    $x = "Outside <br>";  // global variable
    function convert() {
        $x = "Inside <br>";  // local variable
    }
    echo $x;
    convert();
    echo $x;

    /* Global vaiable can change the value of the outside function to the inside function */

    echo "<h2>After 'global' keyword</h2>";

    $x = "Outside <br>";
    function convert_scope() {
        global $x;
        $x = "Inside <br>";
    }
    echo $x;
    convert_scope();
    echo $x;

    ?>
</body>
</html>
```

### Constants

<pre>constants.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Constants</title>
</head>
<body>
    <?php
    // Define a constant which cannot be redefined or changed
    define("PI", 3.14159);

    // Newer way to define a constant
    // const PI = 3.14159;

    function area_of_circle($r) {
        $area = PI * $r * $r;
        echo $area;
    }

    area_of_circle(2);
    ?>
</body>
</html>
```