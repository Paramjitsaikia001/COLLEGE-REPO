<?php
$servername = "localhost";
$username = "root";
$password = "ParamjitSQL";
$dbname = "testdb";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$name = $_POST["name"];
$age = $_POST["age"];
$email = $_POST["email"];
$password = $_POST["password"];
$gender = $_POST["gender"];
$other_details = $_POST["other_details"];


if($name[0]=== number_format){
    
}


$sql ="INSERT INTO `$dbname`.`users` (`name`, `email`, `age`, `Password`,`gender`,`other`,`submission_date`) VALUES 
('$name', '$email', '$age', '$password','$gender','$other_details',current_timestamp());";

echo $sql;

if($conn->query($sql)==true){
    echo "successfully inserted";
}else{
    echo "ERROR: $sql <br> $conn->error";
}

$conn->close();

?>