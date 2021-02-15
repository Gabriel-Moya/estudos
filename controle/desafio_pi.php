<div class="titulo">Desafio PI</div>

<?php
    echo 'PI = ' . pi();
    $pi = 3.14;

    // Calcular uma aproximação de precisão tolerável do valor do PI

    echo '<br>Exemplo';
    if($pi == pi()) {
        echo "<br>Iguais";
    } else {
        echo "<br>Diferentes<br>";
    }
    
    // Resposta
    echo '<br>Resposta';
    if($pi - pi() <= 0.001) {
        echo "<br>Precisão aceitável";
    } else {
        echo "<br>Muita diferença";
    }
?>