<?php
    $con = mysqli_connect("localhost","root","1234","sqldb")or die("Mysql 접속 실패!");

    $sql ="
        CREATE TABLE userTBL(
            userID  char(8) NOT NULL PRIMARY KEY,
            name    varchar(10) NOT NULL,
            birthYear INT NOT NULL,
            addr    CHAR(2) NOT NULL,
            mobile1 CHAR(3),
            mobile2 CHAR(8),
            height  SMALLINT,
            mDate   DATE
        )";
    
        $ret = mysqli_query($con,$sql);

        if($ret){
            echo "userTBL 생성 성공";
        }else{
            echo "userTBL 생성 실패","<br>";
            echo "실패원인 : ",mysqli_error();
        }
        mysqli_close($con);
?>