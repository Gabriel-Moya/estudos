function calculaVelocidade (){

    //Integracao do HTML
    var inVelPermitida = document.getElementById("inVelPermitida");
    var inVelCondutor = document.getElementById("inVelCondutor");
    var situacao = document.getElementById("situacao");

    //Obter dados dos campos
    var velocidadePermitida = Number(inVelPermitida.value);
    var velocidadeCondutor = Number(inVelCondutor.value);

    //Verificação de campos vazios


    //Processamento de dados
    if (velocidadeCondutor <= velocidadePermitida) {
        situacao.textContent = "Sem multa";
    } else if (velocidadeCondutor > velocidadePermitida && velocidadeCondutor <= velocidadePermitida*1.2) {
        situacao.textContent = "Multa leve";
    } else if (velocidadeCondutor > velocidadePermitida*1.2) {
        situacao.textContent = "Multa grave";
    }

}

var verificaVelocidade = document.getElementById("verificaVelocidade");
verificaVelocidade.addEventListener("click", calculaVelocidade);