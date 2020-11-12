function breakContinue() {
    alert("Digite 0 para sair");

    //Início da repetição
    do {
        var num = Number(prompt("Número: "));

        if (num == 0 || isNaN(num)) {
            var sair = confirm("Confirma saída?"); //Solicita confirmação do usuário
            if (sair) {
                break; //Sai da repetição
            } else {
                continue; //Volta ao início do laço
            }
        }

        //Se par, mostra o dobro; Ímpar, mostra o triplo
        if (num%2 == 0) {
            alert("O dobro de " + num + " é: " + num*2);
        } else {
            alert("O triplo de " + num + " é: " + num*3);
        }
    } while (true); //enquanto verdade (só sai do laço, pelo break)

    alert("Bye, bye...")
}