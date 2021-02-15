<div class="titulo">Operadores relacionais</div>

<?php
    var_dump(1 == 1); // true
    var_dump(1 > 1); // false
    var_dump(1 >= 1); // true
    var_dump(4 < 23); // true
    var_dump(1 <= 7); // true
    var_dump(1 != 1); // false
    var_dump(1 <> 1); // false
    
    var_dump(111 == '111'); // true
    var_dump(111 === '111'); // false
    var_dump(111 != '111'); // false
    var_dump(111 !== '111'); // true

    echo "<p>Relacionais no If/Else</p><hr>"
    $idade = 25;

    if($idade < 18) {
        echo "Não pode tirar CNH";
    } else if ($idade >= 18) {
        echo "Pode tirar CNH";
    }
?>