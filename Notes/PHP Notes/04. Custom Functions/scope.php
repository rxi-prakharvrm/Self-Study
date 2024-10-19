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