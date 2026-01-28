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
        echo "<tr><td>$i*5=",$i*5,"</td></tr>";
    }
    echo "</table>";
    ?>
</body>
</html>