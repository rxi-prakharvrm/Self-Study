# Forms

___

## Checking for form submission

```check_submission.php```

```php
<?php

if(isset($_POST['submit'])) {
    echo "Yes it works. <br>";
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
```

### Extracting information from form

```extract_info.php```

```php
<?php

if(isset($_POST['submit'])) {
    $username = $_POST["username"];
    $password = $_POST["password"];

    echo "Hello, " . $username . ", your password is: " . $password;
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
```

### Validating the form values

```validate_forms.php```

```php
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
```

### Adding login functionality

```login_functionality.php```

```php
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
```
