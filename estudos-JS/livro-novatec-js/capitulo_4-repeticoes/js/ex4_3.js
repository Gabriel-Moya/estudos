function doWhile() {
    //Solicita o número e repete a leitura enquanto inválido
    do {
        var num = Number(prompt("Número: "));
        if (num == 0 || isNaN(num)) {
            alert("Digite um número válido...")
        }
    } while (num == 0 || isNaN(num));

    //Declara e inicializa a variável que irá exibir os pares
    var pares = "Pares entre 1 e " + num + ": ";

    //Isola o primeiro par (para evitar última vírgula)
    if (num > 1) {
        pares = pares + "2";
    }

    //Laço para acumular pares (inicia em 4, pois o 2 já foi atribuído)
    for (var i = 4; i <= num; i = i+2) {
        pares = pares + ", " + i;
    }

    //exibe lista dos números pares
    alert(pares);
}