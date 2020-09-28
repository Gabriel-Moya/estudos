function calcularPeso() {
    //Referência aos elementos do HTML
    var inNome = document.getElementById("inNome");
    var rbMasculino = document.getElementById("rbMasculino");
    var rbFeminino = document.getElementById("rbFeminino");
    var inAltura = document.getElementById("inAltura");
    var outResposta = document.getElementById("outResposta");

    //Obter dados preenchidos nos campos
    var nome = inNome.value;
    var masculino = rbMasculino.checked;
    var feminino = rbFeminino.checked;
    var altura = inAltura.value;

    //Verifica se o nome foi preenchido e sexo selecionado
    if (nome == "" || (masculino == false && feminino == false)) {
        alert("Por favor, informe o nome e selecione o sexo...");
        inNome.focus();
        return;
    }

    //Se a altura estiver vazia ou NaN (Not-a-Number)
    if (altura == 0 || altura == isNaN(altura)) {
        alert("Por favor, informe a altura corretamente...");
        inAltura.focus();
        return;
    }

    //Verificação do sexo
    if (masculino) {
        var peso = 22*Math.pow(altura, 2);
    } else {
        var peso = 21*Math.pow(altura, 2);
    }

    //Apresentação da resposta
    outResposta.textContent = nome + ": Seu peso ideal é " + peso.toFixed(3) + " KG";
}

//Referência ao botão
var btResultado = document.getElementById("btResultado");
btCalcular.addEventListener("click", calcularPeso);

function limparCampos() {

    document.getElementById("inNome").value = "";
    document.getElementById("rbMasculino").checked = false;
    document.getElementById("rbFeminino").checked = false;
    document.getElementById("inAltura").value = "";
    
    //Retorna para o documento com o campo nome selecionado
    document.getElementById("inNome").focus();
}

var btLimpar = document.getElementById("btLimpar");
btLimpar.addEventListener("click", limparCampos);