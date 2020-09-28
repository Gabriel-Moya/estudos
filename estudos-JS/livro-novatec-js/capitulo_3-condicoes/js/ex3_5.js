function calculaRaiz() {

    //Referência aos elementos do HTML
    var inNumero = document.getElementById("inNumero");
    var outRaiz = document.getElementById("outRaiz");

    //Atribuição dos valores dos campos de entrada
    var numero = Number(inNumero.value);

    //Verificação de preenchimento do número e exibição do alerta, caso esteja vazio
    if (numero == 0 || isNaN(numero)) {
        alert("Por favor, informe um número");
        inNumero.value = "";
        inNumero.focus();
        return;
    }

    //Cálculo da raiz
    var raiz = Math.sqrt(numero);

    //Verificação de raíz exata e saída de dados
    if (numero%raiz != 0) {
        outRaiz.textContent = "Não há raiz exata para " + numero;
    } else {
        outRaiz.textContent = "Raiz: " + raiz;
    }

}

var btCalculaRaiz = document.getElementById("btCalculaRaiz");
btCalculaRaiz.addEventListener("click", calculaRaiz);