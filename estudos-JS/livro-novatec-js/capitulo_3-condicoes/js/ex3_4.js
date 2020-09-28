function calculaHora() {

    //Referência aos elementos HTML
    var inHoraBrasil = document.getElementById("inHoraBrasil");
    var outHoraFranca = document.getElementById("outHoraFranca");

    //Obter dados preenchidos no campo
    var horaBrasil = Number(inHoraBrasil.value);

    //Verifica se foi preenchido o campo
    if (inHoraBrasil.value == "" || isNaN(horaBrasil)) {
        alert("Informe a hora no Brasil corretamente");
        inHoraBrasil.value = "";
        inHoraBrasil.focus();
        return;
    }

    //Cálculo do horário na frança
    var horaFranca = horaBrasil + 5;

    //Caso passar 24h na França
    if (horaFranca > 24) {
        horaFranca = horaFranca - 24;
    }

    //Exibe a resposta no HTML
    outHoraFranca.textContent = "Hora na França: " + horaFranca.toFixed(2);

}

var btExibir = document.getElementById("btExibir");
btExibir.addEventListener("click", calculaHora)