function mostrarPromocao() {
    // Cria referência aos elementos manipulados
    var inVeiculo = document.getElementById("inVeiculo");
    var inPreco = document.getElementById("inPreco");
    var outVeiculo = document.getElementById("outVeiculo");
    var outEntrada = document.getElementById("outEntrada");
    var outParcela = document.getElementById("outParcela");

    // Obtém conteúdo dos campos de entrada
    var veiculo = inVeiculo.value;
    var preco = inPreco.value;

    // Calcula o valor da entrada e das parcelas
    var entrada = preco*0.5;
    var parcela = (preco*0.5)/12;

    // Altera o conteúdo dos parágrafos de resposta
    outVeiculo.textContent = "Promoção: " + veiculo;
    outEntrada.textContent = "Entrada de R$: " + entrada.toFixed(2);
    outParcela.textContent = "+ 12x de R$: " + parcela.toFixed(2);
}

// Cria uma referência ao elemento btVerPromocao (botão)
var btVerPromocao = document.getElementById("btVerPromocao");

// Registra um evento associado ao botão, para carregar uma função
btVerPromocao.addEventListener("click", mostrarPromocao);