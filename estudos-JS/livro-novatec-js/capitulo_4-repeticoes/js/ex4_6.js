function verificarPrimo() {
    //Referência aos campos no HTML
    var inNumero = document.getElementById("inNumero");
    var outResposta = document.getElementById("outResposta");

    var num = Number(inNumero.value);

    //Verificação de preenchimento correto
    if (num == 0 || isNaN(num)) {
        alert("Número inválido...");
        inNumero.focus();
        return;
    }

    var numDivisores = 0;

    //Percorre todos os possíveis divisores do número
    for (var i=1; i<=num; i++) {
        if(num%i == 0) {
            numDivisores++;
        }
    }

    //Se possuir apenas 2 divisores, o número é primo
    if (numDivisores == 2) {
        outResposta.textContent = num + " É primo";
    } else {
        outResposta.textContent = num + " Não é primo";
    }
}

//Referência aos elementos e após associa ao evento click
var btVerificarPrimo = document.getElementById("btVerificarPrimo");
btVerificarPrimo.addEventListener("click", verificarPrimo);