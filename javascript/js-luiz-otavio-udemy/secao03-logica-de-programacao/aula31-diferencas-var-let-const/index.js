// Let possui escopo de bloco { ... }
// Var possui escopo somente de função
// Const semelhantes às variáveis criadas com let, possui escopo de bloco e não poder ser alterado nem ser redeclarada

let nome = 'Gabriel'; // Criando a variável no bloco global

// Dará erro na execução
// let nome = 'Gabriel Moya';

if (true) {
    // Será alterado
    let nome = 'Gabriel Moya'; // Criando a variável no escopo do primeiro bloco
    console.log(nome);

    if (true) {
        let nome = 'Gabriel e sobrenome aqui'; // Criando a variável no escopo do segundo bloco
        console.log(nome);
    }
}

var nome2 = 'Moya'; // Cria a variável no escopo global

if (true) {
    // Será alterado
    var nome2 = 'Gabriel Moya'; // Redeclara a variável
    console.log(nome2);

    if (true) {
        let nome2 = 'Gabriel e sobrenome aqui'; // Redeclara a variável
        console.log(nome2);
    }
}
