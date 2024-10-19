<?php include "db.php"; ?>
<?php include "functions.php"; ?>

<?php UpdateTable(); ?>

<?php include "includes/header.php"; ?> 
    <div class="container">
        <h1 class="text-center">Update</h1>
        <div class="col-sm-6 p-5">
            <form action="login_update.php" method="post">
                <div class="form-group">
                    <label for="username">Username</label>
                    <input type="text" name="username" class="form-control">
                </div>

                <div class="form-group">
                    <label for="password">Password</label>
                    <input type="password" name="password" class="form-control">
                </div>

                <div class="form-group">
                    <select name="id" id="">

                        <?php
                        ShowAllData();
                        ?>

                    </select>
                </div>

                <input class="btn btn-primary mt-3" type="submit" name="submit" value="Update">
            </form>
        </div>
    </div>
<?php include "includes/footer.php"; ?>