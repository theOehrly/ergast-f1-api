<?php
$user = "root";
$password = "f1";
$database = "ergastdb";
$connection = mysqli_connect("ergastdb", $user, $password);
mysqli_set_charset($connection, "utf8");
@mysqli_select_db($connection, $database) or die("Unable to select database");
?>
