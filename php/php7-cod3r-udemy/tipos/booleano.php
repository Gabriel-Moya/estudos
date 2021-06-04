<div class="titulo">Tipo Booleano</div>

<?php
    echo true;
    echo '<br>';
    echo false;

    echo '<br>' . var_dump(true);
    echo '<br>' . var_dump(false);
    echo '<br>' . var_dump('false');
    echo '<br>' . is_bool(false);
    echo '<br>' . is_bool('true');

?>