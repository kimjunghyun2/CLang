<?php
    $db_host = "localhost";
    $db_user = "root";
    $db_password = "1234";
    $db_name = "";
    $con = mysqli_connect($db_host,$db_user,$db_password,$db_name) or die("MySQL 접속 실패!");

    $sql = "CREATE DATABASE sqlDB3";
    $ret = mysqli_query($con,$sql);

    if($ret) {
        echo "sqlDB 성공적으로 생성됨", "<br>";
    }else{
        echo "sqlDB 실패","<br>";
        echo "실패 원인 :", mysqli_error($con);
    }
    
    mysqli_close($con);
?>