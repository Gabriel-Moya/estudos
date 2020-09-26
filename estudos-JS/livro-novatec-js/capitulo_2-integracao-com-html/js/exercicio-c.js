function calculaPromocao() {

    //Referência aos valores de entrada
    var inProduto = document.getElementById("inProduto");
    var inPreco = document.getElementById("inPreco");
    var outPromocao = document.getElementById("outPromocao");
    var outPrecoProduto = document.getElementById("outPrecoProduto");

    //Receber os valores dos inputs feitos no HTML
    var produto = inProduto.value;
    var preco = inPreco.value;

    //Cálculo da promoção com os dados obtidos
    var total = preco*2.5;
    var precoPromocao = preco/2;

    //Exibição das mensagens
    outPromocao.textContent = produto + " - Promoção: Leve 3 por R$: " + total;
    outPrecoProduto.textContent = "O 3º produto custa apenas R$: " + precoPromocao;

}

//Botão para chamada da função
var verPromocao = document.getElementById("verPromocao");

//Evento para a função
verPromocao.addEventListener("click", calculaPromocao);