<?php
    $db_host = "localhost";
    $db_user = "root";
    $db_password = "1234";
    $db_name = "";
    $con = mysqli_connect($db_host,$db_user,$db_password,$db_name) or die("MySQL 접속 실패!");

    if(mysqli_connect_error()) {
        echo "생성 실패!!", "<br>";
        echo "실패 원인 :", mysqli_error($con);
        exit();
    }
    echo "db 접속성공","<br>";
    mysqli_close($con);
?>