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

    // Printing Array
    <p><?php print_r($numberList1."<br>".$numberList2."<br>".$mixList3) ?></p>
</body>
</html>