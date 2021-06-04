//Variáveis globais
var numContas = 0;
var valTotal = 0;

//Variável string que acumula as contas
var resposta = "";

function registrarConta() {
    //Referência aos elementos da página manipulados pela function
    var inDescricao = document.getElementById("inDescricao");
    var inValor = document.getElementById("inValor");
    var outListaContas = document.getElementById("outListaContas");
    var outTotal = document.getElementById("outTotal");

    //Obtém conteúdo dos campos
    var descricao = inDescricao.value;
    var valor = Number(inValor.value);

    //Verificação de preenchimento dos campos
    if (descricao == "" || valor == 0 || isNaN(valor)) {
        alert("Informe os dados corretamente...")
        inDescricao.focus();
        return;
    }

    //Adiciona os valores ao contador e ao acumulador
    numContas++;
    valTotal = valTotal + valor;

    //Concatena as contas
    resposta = resposta + descricao + " - R$: " + valor.toFixed(2) + "\n";

    //Altera o conteúdo das tags de resposta
    outListaContas.textContent = resposta + "-------------------------------"
    outTotal.textContent = numContas + " Conta(s) - Total R$: " + valTotal.toFixed(2);

    //Limpa os campos e posiciona o cursor em inDescricao
    inDescricao.value = "";
    inValor.value = "";
    inDescricao.focus();
}

//Referencia elemento e após associa function ao evento click
var btRegistrar = document.getElementById("btRegistrar");
btRegistrar.addEventListener("click", registrarConta);