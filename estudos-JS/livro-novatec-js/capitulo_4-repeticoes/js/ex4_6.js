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

    /*--------------------Primeira possibilidade--------------------
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
    --------------------Primeira possibilidade--------------------*/

    /*--------------------Segunda possibilidade--------------------*/
    //Variável flag
    var temDivisor = 0;
    
    //Percorre os possíveis divisores do num
    for (var i=2; i<=num; i++) {
        if (num%i == 0) {
            temDivisor = 1; //Muda a flag
            break;
        }
    }

    //Se num > 1 e não possuir divisor
    if (num>1 && !temDivisor) {
        outResposta.textContent = num + " É primo";
    } else {
        outResposta.textContent = num + " Não é primo";
    }
}

//Referência aos elementos e após associa ao evento click
var btVerificarPrimo = document.getElementById("btVerificarPrimo");
btVerificarPrimo.addEventListener("click", verificarPrimo);