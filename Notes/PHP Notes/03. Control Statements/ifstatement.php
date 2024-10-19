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