const nome = 'Gabriel Moya';

for (let valor of nome) {
    console.log(valor);
}

console.log('####')

const nomes = ['Gabriel', 'João', 'Antonio', 'Alberto'];

for (let i of nomes){
    console.log(i);
}

console.log('####')

nomes.forEach(function(valor, indice, array) {
    console.log(valor, indice, array);
});