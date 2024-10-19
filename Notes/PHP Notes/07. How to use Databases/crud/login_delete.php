<?php include "db.php"; ?>
<?php include "functions.php"; ?>

<?php

if (isset($_POST['submit'])) {
    DeleteRows();    
}

?>

<?php include "includes/header.php"; ?> 
<body>
    <div class="container">
        <h1 class="text-center">Delete</h1>
        <div class="col-sm-6 p-5">
            <form action="login_delete.php" method="post">

                <div class="form-group">
                    <select name="id" id="">

                        <?php
                        ShowAllData();
                        ?>

                    </select>
                </div>

                <input class="btn btn-primary mt-3" type="submit" name="submit" value="Delete">
            </form>
        </div>
    </div>
<?php include "includes/footer.php"; ?>