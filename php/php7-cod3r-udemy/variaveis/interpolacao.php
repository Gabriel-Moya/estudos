<div class="titulo">Interpolação</div>

<?php
    $numero = 10;
    echo $numero;
    echo '<br> $numero'; // Aspas simples interpreta o texto literal
    echo "<br> $numero"; // Aspas simples interpreta as variáveis sem a necessidade de ficar concatenando

    $texto = "A sua nota é: $numero";
    echo "<br>$texto";

    $objeto = 'caneta';
    echo "<br>Eu tenho 5 $objeto.";
    echo "<br>Eu tenho 5 {$objeto}s.";
?>