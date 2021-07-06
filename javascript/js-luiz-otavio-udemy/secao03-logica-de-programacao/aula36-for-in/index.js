// for in ==> lê os índices ou chaves do objeto
const frutas = ['Maça', 'Pêra', 'Uva', 'Pêssego', 'Morango', 'Abacaxi'];

for (let i in frutas) {
    console.log(frutas[i]);
}

const pessoa = {
    nome: 'Gabriel',
    sobrenome: 'Moya'
}

for (let chave in pessoa) {
    console.log(chave, pessoa[chave]);
}