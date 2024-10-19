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