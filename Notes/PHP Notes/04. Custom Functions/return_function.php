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