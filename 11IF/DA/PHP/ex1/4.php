<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Title</title>
</head>
<body>
    <?php
    echo "<table border=1>";
    for ($i=1; $i <=10; $i++) {
        echo "<tr>";
        for ($j=1; $j <=10; $j++){
        echo "<td>$i*$j=",$i*$j,"</td>";
        }
        echo "</tr>";
    }
    echo "</table>";
    ?>
</body>
</html>