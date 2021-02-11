<!DOCTYPE html>
<html lang="pt-br">

    <head>
        <meta charset="UTF-8">
        <link rel="preconnect" href="https://fonts.gstatic.com">
        <link href="https://fonts.googleapis.com/css2?family=Oswald:wght@200;300;400;500;600;700&display=swap" rel="stylesheet">
        <link rel="stylesheet" href="assets/css/style.css">
        <title>Curso PHP7 - Cod3r</title>
    </head>

    <body>

        <header class="cabecalho">
            <h1>Curso PHP</h1>
            <h2>Índice dos Exercícios</h2>
        </header>

        <main class="principal">
            <div class="conteudo">
                <nav class="modulos">
                    <div class="modulo verde">
                        <h3>Básico</h3>
                        <ul>
                            <li>
                                <a href="exercicio.php?dir=basico&file=ola">
                                    Olá PHP
                                </a>
                            </li>
                            <li>
                                <a href="exercicio.php?dir=basico&file=html">
                                    Integração HTML
                                </a>
                            </li>
                            <li>
                                <a href="exercicio.php?dir=basico&file=css">
                                    Integração CSS
                                </a>
                            </li>
                            <li>
                                <a href="exercicio.php?dir=basico&file=comentarios">
                                    Comentários em PHP
                                </a>
                            </li>
                            <li>
                                <a href="exercicio.php?dir=basico&file=desafio">
                                    Desafio
                                </a>
                            </li>
                        </ul>
                    </div>
                    <div class="modulo vermelho">
                        <h3>Tipos</h3>
                        <ul>
                            <li>
                                <a href="exercicio.php?dir=tipos&file=int">
                                    Tipo inteiro
                                </a>
                            </li>
                            <li>
                                <a href="exercicio.php?dir=tipos&file=float">
                                    Tipo float (Números reais)
                                </a>
                            </li>
                            <li>
                                <a href="exercicio.php?dir=tipos&file=aritmeticas">
                                    Operações aritméticas
                                </a>
                            </li>
                            <li>
                                <a href="exercicio.php?dir=tipos&file=string">
                                    Strings
                                </a>
                            </li>
                            <li>
                                <a href="exercicio.php?dir=tipos&file=desafio_string">
                                    Desafio Strings
                                </a>
                            </li>
                            <li>
                                <a href="exercicio.php?dir=tipos&file=booleano">
                                    Tipo booleano
                                </a>
                            </li>
                            <li>
                                <a href="exercicio.php?dir=tipos&file=conversoes">
                                    Conversões
                                </a>
                            </li>
                        </ul>
                    </div>
                </nav>
            </div>
        </main>

        <footer class="rodape">
            Gabriel Moya <?= date('Y'); ?>
        </footer>

    </body>

</html>