<?php
    $con = mysqli_connect("localhost","root","1234","sqldb")or die("Mysql 접속 실패!");

    $sql ="
        SELECT * FROM userTBL;
        ";

        $ret = mysqli_query($con,$sql);

        if($ret){
            echo mysqli_num_rows($ret),"건이 조회됨. <br><br>";
        }else{
            echo "userTBL 데이터 조회 실패","<br>";
            echo "실패원인 : ",mysqli_error();
            exit();
        }

        while($row = mysqli_fetch_array($ret)){
            echo $row['userID']," ",$row['name']," ",$row['height']," ","<br>";
        }
        mysqli_close($con);
?>