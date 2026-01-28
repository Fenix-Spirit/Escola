<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>tabela</title>
</head>
<body>
    <form method="post" name="form1" id="form1" >
        Linha:<input type="number" name="linha" id="linha" value="5"><br>
        Coluna:<input type="number" name="coluna" id="coluna" value="5"><br>
        Conteúdo:<br>
        <input type="radio" name="conteudo" id="conteudo0" value="0" checked>
        <label for="conteudo0">Pares</label><br>
        <input type="radio" name="conteudo" id="conteudo1" value="1">
        <label for="conteudo1">Ímpares</label><br>
        <input type="radio" name="conteudo" id="conteudo2" value="2">
        <label for="conteudo2">Primos/label><br>
        <input type="radio" name="conteudo" id="conteudo3" value="3">
        <label for="conteudo3">Aleatório</label><br>
        Cor das linhas:<input type="color" name="cor_l" id="cor_l"><br>
        Cor de fundo:<input type="color" name="cor_f" id="cor_f"><br>
        Cor do texto:<input type="color" name="cor_t" id="cor_t"><br>
        <input type="submit" name="enviar" id="enviar">
    </form>
    <?php
        if (isset($_POST['enviar'])){
            $linhas=$_POST['linha'];
            $colunas=$_POST['coluna'];
            $conteudo=$_POST['conteudo'];
            $cor_l=$_POST['cor_l'];
            $cor_f=$_POST['cor_f'];
            $cor_t=$_POST['cor_t'];
            $n=$linhas*$colunas;
            echo "<table>";
            for ($i=0; $i < $linhas; $i++) {
                echo "<tr>";
                for ($j=0; $j < $colunas; $j++) {
                    echo "<td style='background-color:$cor_f;color:$cor_t'>dsdd</td>";
                }
                echo "</tr>";
            }
            echo "</table>";
            //Falta o conteudo e cor linhas
        }
    ?>
</body>
</html>