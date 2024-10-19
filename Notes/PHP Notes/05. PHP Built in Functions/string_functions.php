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