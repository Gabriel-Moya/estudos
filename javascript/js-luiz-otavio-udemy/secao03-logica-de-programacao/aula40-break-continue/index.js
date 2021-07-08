// Continue continua para a próxima iteração sem executar o código abaixo dele naquele momento
// Break sai do laço e não executa mais nenhuma vez o bloco de código

const numeros = [1, 2, 3, 4, 5, 6, 7, 8, 9];

for (let numero of numeros) {

    if (numero === 2){
        console.log('Pula o número 2...');
        continue;
    }

    if (numero === 5){
        console.log('Encontra o número 5...');
        break;
    }

    console.log(numero);
}