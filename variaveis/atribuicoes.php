<div class="titulo">Atribuições</div>

<?php
    $title = 'Atribuições';

    $numero = 10;
    echo $numero;

    $numero = $numero-1;
    echo '<br>' . $numero;

    $numero += $numero;
    echo '<br>' . $numero;

    $numero -= $numero;
    echo '<br>' . $numero;

    $numero = $numero+1;
    echo '<br>' . $numero;

    $numero = $numero+1.5;
    echo '<br>' . $numero;

    $numero--;
    echo '<br>' . $numero;

    $numero++;
    echo '<br>' . $numero;

    // Concatenação
    echo '<br>' . $title;
    $title .= ' e concatenação';
    echo '<br>' . $title;
?>