<div class="titulo">Tipo string</div>

<?php
    echo 'Isso é uma string';
    echo'<br>';
    var_dump("Isso é uma string");
    // Irá resultar em um tamanho maior devido a acentuação
    echo'<br>';
    echo'<br>';

    // Concatenação
    echo "Concatenação em PHP é " . "com o ponto final .<br>";

    // Funções de strings
    echo'<br>Funções com strings';
    echo('<br>' . strtoupper('maximizado'));
    echo('<br>' . strtolower('MINIMIZADO'));
    echo('<br>' . ucfirst('primeira letra apenas'));
    echo('<br>' . ucwords('todas as palavras da string'));
    echo('<br>' . strlen('Quantas letras'));
    echo('<br>' . mb_strlen('tamanho da string com acentuação'));
    echo('<br>' . substr('Selecionando parte da string', 12, 10));
    echo('<br>' . str_replace('isso', 'aquilo', 'substitua isso'));

?>