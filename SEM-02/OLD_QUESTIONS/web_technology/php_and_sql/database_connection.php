<?php

$host = "hostname"; // usually localhost
$user = "username"; // root for localhost
$pass = "password"; // empty for localhost
$db = "database_name"; 

$con = mysqli_connect($host, $user, $pass, $db);

    if(!$con){
        echo "Error";
    }else{
        echo "connection successful";
    }