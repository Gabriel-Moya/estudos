<div class="titulo">Estruturas de controle</div>

<?php
    if(true) {
        echo ("Se for verdadeiro, essa frase irá aparecer<br>");
    } else {
        echo ("Se for falso, aparece essa<br>");
    }

    if(false) {
        echo ("Se for verdadeiro, essa frase irá aparecer<br>");
    } else {
        echo ("Se for falso, aparece essa<br>");
    }

    if(false) {
        echo ("Passo A<br>");
    } else if (true) {
        echo ("Passo B<br>");
    } else {
        echo ("Passo final<br>");
    }

    echo ('"Return 0;" :D<br>');
?>