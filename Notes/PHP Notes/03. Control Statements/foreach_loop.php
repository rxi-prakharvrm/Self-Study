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