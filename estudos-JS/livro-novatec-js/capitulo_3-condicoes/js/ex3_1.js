function calculaMedia() {

    //Referência aos campos do HTML
    var inNome = document.getElementById("inNome");
    var inNota1 = document.getElementById("inNota1");
    var inNota2 = document.getElementById("inNota2");
    var outMedia = document.getElementById("outMedia");
    var outSituacao = document.getElementById("outSituacao");

    //Obter dados do documento HTML
    var nome = inNome.value;
    var nota1 = Number(inNota1.value);
    var nota2 = Number(inNota2.value);
    
    //Processamento dos dados obtidos
    var media = (nota1 + nota2)/2;
    
    //Exibição da media
    outMedia.textContent = "Média das notas: " + media.toFixed(1);

    //Condição para a exibição da situação
    if(media >= 7) {
        outSituacao.textContent = "Parabéns " + nome + "! Você foi aprovado(a)";
        outSituacao.style.color = "green";
    }
    else {
        outSituacao.textContent = "Ops " + nome + "! Você foi reprovado(a)";
        outSituacao.style.color = "red";
    }

}

//Referência ao botão do HTML
var btResultado = document.getElementById("btResultado");

//Chamada da função a partir do evento
btResultado.addEventListener("click", calculaMedia);