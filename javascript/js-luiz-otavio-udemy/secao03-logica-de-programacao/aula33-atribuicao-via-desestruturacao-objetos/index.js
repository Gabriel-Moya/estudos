const pessoa = {
    nome: 'Gabriel',
    sobrenome: 'Moya',
    endereco: {
        rua: 'Av. fulano de tal',
        numero: 320
    }
};

// Atribuição via desestruturação
const { nome, sobrenome, endereco: { rua, numero } } = pessoa;
console.log(nome, sobrenome, rua, numero)