<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
</head>
<body>
    
    <form action="#" method="POST">
    Enter a starting number:
        <input type="number" name="num1" /><br><br>
    Enter a ending number:
        <input type="number" name="num2" /><br><br>
        <input type="submit" value="check" id="sub"/>
    </form>

    <p>
    <?php

    $start = $_POST['num1'];
    $end = $_POST['num2'];
    $prime = false;

        function check($n){
            if($n == 1){
            }elseif ($n == 2) {
                echo $n . "<br/>";
            }else{
                for($i=2; $i < $n; $i++){
                    if($n%$i == 0){
                        break;
                    }else{
                        $GLOBALS["prime"] = true;
                    }
                }
                if($GLOBALS["prime"]){
                    echo $n . "<br/>";
                    $GLOBALS["prime"] = false;
                }
            }
        }

        for($x=$start; $x<=$end; $x++){
            check($x);
        }
        
    ?>
    </p>

</body>
</html> 