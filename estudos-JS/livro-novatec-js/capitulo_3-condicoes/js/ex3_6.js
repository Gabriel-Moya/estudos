function calculaNotas() {

    //Referência aos campos do HTML
    var inSaque = document.getElementById("inSaque");
    var outNotasCem = document.getElementById("outNotasCem");
    var outNotasCinquenta = document.getElementById("outNotasCinquenta");
    var outNotasDez = document.getElementById("outNotasDez");

    //Limpando mensagens, caso ocorra uma segunda execução
    outNotasCem.textContent = "";
    outNotasCinquenta.textContent = "";
    outNotasDez.textContent = "";

    //Obtendo os dados do HTML
    var saque = Number(inSaque.value);

    //Verificação de campo vazio ou NaN (Not a number)
    if (saque == 0 || isNaN(saque)) {
        alert("Informe o valor do saque corretamente");
        inSaque.focus();
        return;
    }

    //Verificação de notas disponíveis
    if (saque%10 != 0) {
        alert("Valor inválido para notas disponíveis (R$ 10, 50, 100)");
        inSaque.focus();
        return;
    }

    //Calcula notas de 100, 50 e 10
    var notasCem = Math.floor(saque/100);
    var resto = saque%100;
    var notasCinquenta = Math.floor(resto/50);
    resto = resto%50;
    var notasDez = Math.floor(resto/10);

    //Exibe somente se gouver notas
    if(notasCem > 0) {
        outNotasCem.textContent = "Notas de R$ 100,00: " + notasCem;
    }

    if(notasCinquenta > 0) {
        outNotasCinquenta.textContent = "Notas de R$ 50,00: " + notasCinquenta;
    }

    if(notasDez > 0) {
        outNotasDez.textContent = "Notas de R$ 10,00: " + notasDez;
    }

}

//Referência botão
var btSaque = document.getElementById("btSaque");
btSaque.addEventListener("click", calculaNotas);