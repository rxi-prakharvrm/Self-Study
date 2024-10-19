<?php
if (isset($_POST['submit'])) {
    $username = $_POST["username"];
    $password = $_POST["password"];

    $username_min_length = 5;
    $username_max_length = 20;

    // Username Validation
    if (strlen($username) < $username_min_length || strlen($username) > $username_max_length) {
        echo "Invalid username<br>";
    }

    $names = array(
        'Alice' => 'password1',
        'Bob' => 'password2',
        'Charlie' => 'password3',
        'David' => 'password4',
        'Eva' => 'password5',
        'Frank' => 'password6',
        'Grace' => 'password7',
        'Hannah' => 'password8',
        'Isaac' => 'password9',
        'Jack' => 'password10'
    );

    if (array_key_exists($username, $names) && $names[$username] === $password) {
        echo "Login Successfully as " . $username;
    } else {
        echo "Register first<br>";
    }
}
?>