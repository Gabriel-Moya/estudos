<div class="titulo">Desafio Equação</div>
<img src="https://i.imgur.com/nXgxLcQ.png" width="600">

<?php
    echo '<br>';
    $A;
    $B;
    $resultado;

    echo ('Primeiramente iremos definir o lado esquerdo da operação de subtração como "A" e o lado direito como "B", por fim o resultado final será elevado ao cubo divindo pelo 10^3.<br>');

    $A = ((6 * (3+2)) ** 2)/(3*2);
    echo ('A = ' . $A . '<br>');

    $B = (((1-5)*(2-7))/2)**2;
    echo ('B = ' . $B . '<br>');

    $resultado = (($A - $B)**3)/10**3;
    echo ('Resultado = ' . $resultado . '<br>');
?>