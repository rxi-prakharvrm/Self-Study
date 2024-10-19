## Control Statements

<pre>ifstatement.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>If Statement</title>
</head>
<body>
    <?php
    $age = 13;
    if($age > 0 && $age <= 4) {
        echo "Infants and young children.";
    } elseif($age > 4 && $age <= 12) {
        echo "Children.";
    } elseif($age > 12 && $age <= 19) {
        echo "Teenagers (also known as adolescents or youth).";
    } elseif($age > 20 && $age <= 39) {
        echo "Young adults";
    } elseif($age > 39 && $age <= 59) {
        echo "Middle-aged adults";
    } elseif($age > 59 && $age <= 79) {
        echo "Older adults";
    } else {
        echo "Elderly";
    }
    ?>
</body>
</html>
```

### Comparison Operators

<pre>comparison_operators.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<body>

<!--

  <h2>Comparison Operators</h2>
  <pre>
      
      equal ==
      identical ===
      compare > <  >= <= <>
      not equal !=
      not identical !==
      
</pre>


 <h2>Logical Operators</h2>
  <pre>
      
     And &&
     Or  ||
    Not  !
      
</pre>
-->

<?php 
   
if(4 === 4 && 5 < 10 ) {

    echo "it is true <br>";

}

if(4 !== 4 || 5 < 10 ) {

    echo "it is true<br>";

}

if(4 <> 5) {

    echo "it is true";

}
?>

</body>
</html>
```

### Switch Statements

<pre>switch_statements.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Switch Statements</title>
</head>
<body>
    <?php
    $number = 10;
    
    switch($number) {
        case 10: 
            echo "It is number 10";
            break;
        case 20:
            echo "It is number 20";
            break;
        default:
            echo "It is neither 10 nor 20";
    }
    ?>
</body>
</html>
```

### While Loop

<pre>while_loop.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>While Loop</title>
</head>
<body>
    <?php
    $index = 0;
    while ($index < 100) {
        echo " Ram राम ";
        $index++; // $index = $index - 1;
    }
    ?>
</body>
</html>
```

### For Loop

<pre>for_loop.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>For Loop</title>
</head>
<body>
    <?php
    for($index = 0; $index < 100; $index++) {
        echo " Ram राम ";
    }
    ?>
</body>
</html>
```

### Foreach Loop

<pre>foreach_loop.php</pre>

```php
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Foreach Loop</title>
</head>
<body>
    <?php
    $numbers = [1, 2, 3, 4, 5, 6];

    foreach($numbers as $number) {
        echo $number."<br>";
    }
    ?>
</body>
</html>
```