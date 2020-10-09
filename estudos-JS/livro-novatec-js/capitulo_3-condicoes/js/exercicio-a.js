function verificaParImpar () {
    
    //Campos HTML
    var inNumero = document.getElementById("inNumero");
    var outResposta = document.getElementById("outResposta");

    //Obtendo valores
    var n = Number(inNumero.value);

    //Verificação de preenchimento do campo
    if (isNaN (n) || n == "") {
        alert("Insira o número corretamente");
        inNumero.focus();
    }

    //Processamento de dados
    if (n%2 == 0){
        outResposta.textContent = "Resposta: " + n + " é par";
    } else {
        outResposta.textContent = "Resposta: " + n + " é ímpar";
    }

}

var verificar = document.getElementById("verificar");
verificar.addEventListener("click", verificaParImpar);