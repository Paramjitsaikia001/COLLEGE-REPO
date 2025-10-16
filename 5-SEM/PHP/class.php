<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>class</title>
</head>
<body>
    <h1>class</h1>
    <?php
    class car{
        public $color;
        public $brand;

        public function __construct($color,$brand){
            $this->color=$color;
            $this->brand =$brand;
        }

        public function message (){
            echo " the car is of brand ". $this->brand . " and the color is ",$this->color . "";
        }
    }

    $mycar = new car("red","TATA");
    $mycar->message();
    ?>
</body>
</html>