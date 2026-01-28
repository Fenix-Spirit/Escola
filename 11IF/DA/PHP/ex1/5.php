<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Title</title>
</head>
<body>
    <?php
    function verify_primo($n){
        if ($n==1) return false;
        for ($i=2; $i < sqrt($n); $i++) {
            if (($n%$i)==0){
                return false;
            }
        }
        return true;
    }
    $num=1;
    $cont=0;
    while ($cont<10){
        if (verify_primo($num)){
            echo "$num<br>";
            $cont++;
        }
        $num++;
    }
    ?>
</body>
</html>