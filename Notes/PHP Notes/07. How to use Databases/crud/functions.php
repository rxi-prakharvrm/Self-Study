<?php include "db.php" ?>

<?php

function ShowAllData() {
    global $connection;

    $query = "SELECT * FROM users";
    $result = mysqli_query($connection, $query);
    
    if (!$result) {
        die("Query Failed!");
    }
    
    while($row = mysqli_fetch_assoc($result)) {
        $id = $row['id'];
        echo "<option value='$id'>$id</option>";
    }
}

function CreateRows() {
    if (isset($_POST['submit'])) {
        global $connection;
        $username = $_POST['username'];
        $password = $_POST['password'];

        $username = mysqli_real_escape_string($connection, $username);
        $password = mysqli_real_escape_string($connection, $password);

        $hashFormat = "$2y$10$";
        $salt = "iusesomecrazystrings22";
        $hashF_and_salt = $hashFormat . $salt;
        $password = crypt($password, $hashF_and_salt);


        $query = "INSERT INTO users (username, password) VALUES ('$username', '$password')";

        $result = mysqli_query($connection, $query);

        if(!$result) {
            die("Query Failed!");
        } else {
            echo "Data inserted successfully!";
        }
    }
}

function ReadData() {    
    global $connection;
    $query = "SELECT * FROM users";
    $result = mysqli_query($connection, $query);
    if(!$result) {
        die('Query FAILED' . mysqli_error($connection));
    }
        
    while($row = mysqli_fetch_assoc($result)) {
        print_r($row);
    }  
}

function UpdateTable() {
    if (isset($_POST['submit'])) {
        global $connection;
        $username = $_POST['username'];
        $password = $_POST['password'];
        $id = $_POST['id'];

        $query = "UPDATE users SET ";
        $query .= "username = '$username', ";
        $query .= "password = '$password' ";
        $query .= "WHERE id = $id ";

        $result = mysqli_query($connection, $query);
        if (!$result) {
            die("QUERY FAILED" . mysqli_error($connection));
        } else {
            echo "Record Updated";
        }
    }
}

function DeleteRows() {
    global $connection;
    $id = $_POST['id'];

    $query = "DELETE FROM users ";
    $query .= "WHERE id = $id ";

    $result = mysqli_query($connection, $query);
    if (!$result) {
        die("QUERY FAILED" . mysqli_error($connection));
    } else {
        echo "Row Deleted Successfully!";
    }
}

?>