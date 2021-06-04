// VAR permite ser redeclarada, com o LET isso não é possível

var nome = 'Abcde';
console.log(nome);

var nome = 'Gabriel';
console.log(nome);

let nome2 = 'Abcde';
// Aqui irá gerar erro
let nome2 = 'Gabriel';