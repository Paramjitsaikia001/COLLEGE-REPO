<!-- <?php
 echo"hello,PHP";
?> -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h1>My first PHP page</h1>
    <?php
    echo "Hello World!";

    $a=9;

    function myTest(){
        global $a , $type;
        echo "<p>Test function</p>";
        echo "<p>Variable a inside function is: $a</p>";
        echo "<p>data type of a is : " . var_dump($a) . "</p>";
    }

    myTest();
    ?>
</body>
</html>