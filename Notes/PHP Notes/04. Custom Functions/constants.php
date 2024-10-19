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