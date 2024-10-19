## Variables in PHP

- In PHP, variables start with a $ sign, followed by the name of the variable.

### PHP Variables

A variable can have a short name (like x and y) or a more descriptive name (age, carname, total_volume).

__Rules for PHP variables:__

1. A variable starts with the '\$' sign, followed by the name of the variable
2. A variable name must start with a letter or the underscore character
3. A variable name cannot start with a number
4. A variable name can only contain alpha-numeric characters and underscores (A-z, 0-9, and _ )
5. Variable names are case-sensitive (\$age and \$AGE are two different variables)

<pre>variables.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<body>
    <?php
    $name = "James Carter";
    $wife_name = "<h1>Alice Carter</h1>";
    $age = 32;
    $bmi = 24.53;
    ?>

    <?php echo "Hello, my name is " . $name . ". I'm " . $age . " years old. My BMI is " . $bmi . "."; ?>
</body>
</html>
```

<pre>math.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Maths</title>
</head>
<body>
    <?php
    echo 21*3;
    echo "<br>";
    echo 20/6;    
    echo "<br>";
    echo 21+3;    
    echo "<br>";
    echo 21-3;    
    echo "<br>";
    echo 21%3;    
    echo "<br>";
    echo "<br>";

    // BODMAS Rules works here
    echo 21 + 2 - 2 * 10 / 2 % 3;
    ?>
</body>
</html>
```

## Arrays

- An array stores multiple values in one single variable.

<pre>array.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Array</title>
</head>
<body>
    <?php
    $numberList1 = array("mango", "apple", "orange");
    $numberList2 = [1, 2, 3, 4];
    $mixList3 = ["1", 2, "James", "<h1>Hello</h1>"];
    ?>

    // Echoing numberList1 and numberList2
    <p><?php echo "Person-".$numberList2[0]." likes ".$numberList1[0]; ?></p>

    // Echoing mixList3
    <p><?php echo $mixList3[0]."<br>".$mixList3[1]."<br>".$mixList3[2]."<br>".$mixList3[3]; ?></p>

    // Printing Array Structure
    <?php 
    print_r($numberList1) 
    ?>
</body>
</html>
```

### Associative Array

<pre>associative_array.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Associative Array</title>
</head>
<body>
    <?php
    // Associative arrow
    $names = array("first_name" => "Alice", "second_name" => "Mike");
    ?>

    <h1><?php echo $names['second_name']; ?></h1>
</body>
</html>
```