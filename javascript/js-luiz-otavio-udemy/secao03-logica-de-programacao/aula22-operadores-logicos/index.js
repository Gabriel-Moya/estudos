/*
    Operadores lógicos
    && -> AND
    || -> OR
    !  -> NOT
*/

const expressaoAnd = true && true && true;
const expressaoOr = true || false;

console.log(expressaoAnd);
console.log(expressaoOr);

const usuario = 'gabriel';
const senha = '123456';
const login = usuario === 'gabriel' && senha === '123456';

console.log(login);

console.log(!true);