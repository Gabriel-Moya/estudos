<div class="titulo">Constantes</div>

<?php
    define('TAXA_DE_JUROS', 5.9);
    echo TAXA_DE_JUROS;

    const NOVA_TAXA = 2.5;
    echo '<br>' . NOVA_TAXA;

    // Definindo uma constante a partir de uma variável
    $valorVariavel = 2.8;
    define('NOVA_CONSTANTE', $valorVariavel);
    echo '<br>' . NOVA_CONSTANTE;


    // Algumas constantes já definidas no PHP
    echo '<br>' . PHP_VERSION;
    echo '<br>Linha: ' . __LINE__;
    echo '<br>' . __FILE__;
    echo '<br>' . __DIR__;
?>