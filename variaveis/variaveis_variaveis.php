<div class="titulo">Variáveis variáveis</div>

<?php
    $a = 'valorA';
    $$a = 'valorAA';
    echo "$a {$$a} ${$a} $valorA"
?>