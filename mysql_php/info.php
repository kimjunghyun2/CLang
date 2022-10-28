<?php

$con = mysqli_connect('localhost','root','1234')or die("MySql 접속 실패");
phpinfo();
mysqli_close($con);
?>