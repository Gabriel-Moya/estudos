function calculaTotal() {

    //Recuperando as informações de entrada
    var inValor = document.getElementById("inValor");
    var inTempo = document.getElementById("inTempo");
    var outTotal = document.getElementById("outTotal");

    //Recebendo os valores do HTML
    var valor = inValor.value;
    var tempo = inTempo.value;

    //Calculando o valor total a ser pago
    var total = Math.ceil(tempo/15)*valor;

    //Retornando a saída
    outTotal.textContent = "Valor total a Pagar R$: " + total;

}

//Botão chamando a função
var calcValor = document.getElementById("calcValor");

//Evento para a chamada da função
calcValor.addEventListener("click", calculaTotal);