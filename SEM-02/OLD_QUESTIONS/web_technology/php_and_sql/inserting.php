<?php

    // yesmah paila connection wala huna parxa balla tala ko

    $stringValue = "ram"; //example
    $numericValue = 12; //example

    // command to insert into table
    $sql = "INSERT INTO table_name(givenvalue1, givenvalue2, ..) VALUES('$stringValue', $numericValue)";

        mysqli_query($con, $sql);

    if(mysqli_affected_rows($con)>0){
        echo "added";
    }else {
        echo "failed";
    }
