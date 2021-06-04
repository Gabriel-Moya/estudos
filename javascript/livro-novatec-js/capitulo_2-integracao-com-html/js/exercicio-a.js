function calcularPreco(){
    // referência aos elementos
    var inMed = document.getElementById("inMed");
    var inPreco = document.getElementById("inPreco");
    var outMed = document.getElementById("outMed");
    var outPreco = document.getElementById("outPreco");

    // obtem o conteúdo dos elementos
    var medicamento = inMed.value;
    var preco = inPreco.value;

    // calcula o valor da promoção
    var total = Math.floor(preco*2);

    // saída dos resultados
    outMed.textContent = "Promoção de " + medicamento;
    outPreco.textContent = "Leve 2 por apenas " + total;
}

// cria uma referência ao botão de mostrar promoção
var calculaPromocao = document.getElementById("calculaPromocao");

// registra um evento associado ao botão, para carregar uma função
calculaPromocao.addEventListener("click", calcularPreco);