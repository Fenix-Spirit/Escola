<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>form</title>
</head>
<body>
    <form name="form1" id="form1" method="post"><br>
        Nome:<input type="text" name="nome"><br>
        Idade:<input type="number" name="idade"><br>
        Altura:<input type="number" step="0.01" name="altura"><br>
        Peso:<input type="number"  step="0.01" name="peso"><br>
        Sexo:<br>
        <input type="radio" name="sexo" value="Masculino" id="sexoM">
        <label for="sexoM">Masculino</label>
        <br>
        <input type="radio" name="sexo" value="Feminino" id="sexoF">
        <label for="sexoF">Feminino</label><br>
        <input type="submit" value="Enviar">
        <input type="reset" value="Limpar">
    </form>
    <?php
        if (isset($_POST['nome']) && isset($_POST['idade']) && isset($_POST['altura']) && isset($_POST['peso']) && isset($_POST['sexo'])){
            $nome = $_POST['nome'];
            $idade = $_POST['idade'];
            $altura = $_POST['altura'];
            $peso = $_POST['peso'];
            $sexo = $_POST['sexo'];
            $ano_nascimento = date("Y")-$idade;
            $imc = $peso/pow($altura,2);
            echo "Olá ".$nome."<br>Sexo: ".$sexo."<br>";
            echo "Nascido em:".$ano_nascimento."<br>";
            if ($idade>=18) echo "Tipo: Adulto<br>";
            elseif ($idade<10) echo "Tipo: Criança<br>";
            else echo "Tipo: Jovem<br>";
            echo "IMC: ".(round($imc,2))."<br>";
            if ($imc<18.5) echo "Classificação: Magro<br>";
            elseif ($imc<25) echo "Classificação: Saudável<br>";
            elseif ($imc<30) echo "Classificação: Sobrepeso<br>";
            elseif ($imc>30) echo "Classificação: Obeso<br>";
        }
    ?>
</body>
</html>