function calcula (){
    
    //Integracao com o HTML
    var inValor = document.getElementById("inValor");
    var outTempo = document.getElementById("outTempo");
    var outTroco = document.getElementById("outTroco");

    //Obtenção de dados do HTML
    var valor = Number(inValor.value);

    //Verificação de preenchimento dos campos
    if (isNaN(valor) || valor == 0) {
        alert("Informe um valor válido de moedas");
        inValor.focus();
        return;
    }

    if (valor < 1) {
        alert("Valor insuficiente, insira no mínimo R$: 1.00");
        inValor.focus();
        return;
    }

    if (valor >= 1 && valor < 1.75) {
        outTempo.textContent = "Tempo: 30min";
        if (valor > 1) {
            outTroco.textContent = "Troco R$: " + (valor - 1);
        }
    } else if (valor >= 1.75 && valor < 3) {
        outTempo.textContent = "Tempo: 60min";
        if (valor > 1.75 && valor < 3) {
            outTroco.textContent = "Troco R$: " + (valor - 1.75);
        }
    } else if (valor >= 3) {
        outTempo.textContent = "Tempo: 120Min";
        if (valor > 3) {
            outTroco.textContent = "Troco R$: " + (valor - 3);
        }
    }

}

var btDeposito = document.getElementById("btDeposito");
btDeposito.addEventListener("click", calcula);