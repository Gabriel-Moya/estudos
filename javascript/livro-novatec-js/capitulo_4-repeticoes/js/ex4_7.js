function preencherEspacos() {
    var inNumero = document.getElementById("inNumero");
    var outEspacos = document.getElementById("outEspacos");

    var numero = Number(inNumero.value);

    // Verifica se a entrada é válida
    if (numero == 0 || isNaN(numero)){
        alert("Número inválido");
        inNumero.focus;
        return;
    }

    // Variável responsável por concatenar as estrelas/traços
    var estrelas = "";

    for (var i = 1; i <= numero; i++){
        if (i % 2 == 1){
            estrelas += "*"; // Posição ímpar
        } else {
            estrelas += "-"; // Posição par
        }
    }

    // Exibe as estrelas
    outEspacos.textContent = estrelas;

}

// Faz referência ao botão e associa a function ao evento de click
var btPreencherEspaco = document.getElementById("btPreencher");
btPreencherEspaco.addEventListener("click", preencherEspacos);