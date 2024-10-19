# Built in Functions
___

### Built in Maths Functions

<pre>math_functions.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Maths Functions</title>
</head>
<body>
    <?php
    echo pow(10, 2) . "<br>";
    echo rand(1, 100) . "<br>";
    echo sqrt(100) . "<br>";
    echo ceil(10.23) . "<br>";
    echo floor(2.99) . "<br>";
    echo round(2.5) . "<br>";
    ?>
</body>
</html>
```

<u>__Note:__</u> For extended list of built-in string functions  [Click Here]("https://www.php.net/manual/en/ref.math.php"{:target="_blank"})

### String Functions

<pre>string_functions.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>String Functions</title>
</head>
<body>
    <?php
    $string = "Hello students!, do you like the class?";

    // Length of the string
    echo strlen($string) . "<br>";

    // Change to upper case
    echo strtoupper($string) . "<br>";
    
    // Change to lower case
    echo strtolower($string) . "<br>";
    ?>
</body>
</html>
```

<u>__Note:__</u> For extended list of built-in string functions [Click Here]("https://www.php.net/manual/en/ref.strings.php"{:target="_blank"})

### String Functions

<pre>array_functions.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Array Functions</title>
</head>
<body>
    <?php
    $list = [1, 2, 3, 4, 5, 6];

    // max value
    echo max($list) . "<br>";

    // min value
    echo min($list) . "<br>";

    ?>
</body>
</html>
```

<u>__Note:__</u> For extended list of built-in array functions [Click Here]("https://www.php.net/manual/en/ref.array.php"{:target="_blank"})
