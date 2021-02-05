<div class="titulo">Operações aritméticas</div>

<?php
    echo 'Adição com inteiros<br>';
    echo 1+1, '<br>';
    var_dump(1+1);
    echo '<br>';

    echo '<br>Adição com real<br>';
    echo 1+1.3, '<br>';
    var_dump(1+1.3);
    echo '<br>';

    echo '<br>Subtração<br>';
    echo 3-2, '<br>';

    echo '<br>Multiplicação<br>';
    echo 3*2, '<br>';

    echo '<br>Divisão<br>';
    echo 8/2, '<br>';
    
    echo '<br>Divisão resultante em inteiro<br>';
    echo intdiv(9, 4), '<br>';

    echo '<br>Arredondamento de divisão<br>';
    echo round(9/4), '<br>';

    echo '<br>Módulo da divisão<br>';
    echo round(9%4), '<br>';

    echo '<br>Exponenciação<br>';
    echo round(9**2), '<br>';

    // Precedência de operadores:
    // ()   ->  **  ->  / * %   ->  + -

?>