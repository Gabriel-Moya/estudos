<div class="titulo">Integração CSS</div>


<!-- Aproveitamento do código anterior -->
<h1 center>
    <?php
        echo 'Primeira forma de gerar um texto com o PHP';
    ?>
</h1>

<?= '<div center azul>Segunda forma de gerar texto</div>' ?>

<br>

<div center><button dobro><?= 'Posso inserir conteúdo dentro do HTML' ?></button></div>


<!-- Integração com CSS -->
<style>
    button {
        padding: 5px <?= 2*10 ?>px;
        background-color: #4286f4;
        color: #EEE;
        font-weight: bold;
        border-radius: 10px;
    }

    [center] {
        display: flex;
        justify-content: center;
    }

    <?= "[azul]" ?> {
        color: #4286f4;
    }

    [dobro] {
        font-size: <?= 10-8 ?>rem;
    }
</style>