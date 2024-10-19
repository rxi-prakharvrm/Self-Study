<?php

if(isset($_POST['submit'])) {
    
$username = $_POST["username"];
$password = $_POST["password"];

$username_min_length = 5;
$username_max_length = 20;

// Username Validation
if (strlen($username) < $username_min_length || strlen($username) > $username_max_length) {
    echo "Invalid username<br>";
}

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Forms</title>
</head>
<body>
    <form action="form.php" method="post">
        <input type="text" name="username" id="" placeholder="Enter Username... "><br>
        <input type="password" name="password" id="" placeholder="Enter Password... "><br>
        <input type="submit" name="submit" value="Submit">
    </form>
</body>
</html>