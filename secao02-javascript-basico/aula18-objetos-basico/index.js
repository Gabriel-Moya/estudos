const pessoa1 = {
    nome: 'Gabriel',
    sobrenome: 'Moya',
    idade: 25
};

const pessoa2 = {
    nome: 'Maria',
    sobrenome: 'Oliveira',
    idade: 55
};

console.log(pessoa1.nome);
console.log(pessoa1.sobrenome);

console.log(pessoa2.nome);
console.log(pessoa2.sobrenome);

function criaPessoa (nome, sobrenome, idade) {
    return {
        nome,
        sobrenome,
        idade
    }
}

const pessoa3 = criaPessoa('Gabriel', 'Moya', 25);
console.log(pessoa3);

const pessoa4 = {
    nome: 'Gabriel',
    sobrenome: 'Moya',
    idade: 25,

    falaOi() {
        console.log(`${this.nome} ${this.sobrenome} está falando oi...`);
    }
}

pessoa4.falaOi();