/*
    && -> false && true -> Retorna o valor literal do primeiro falso
    || -> true || false -> Retorna o valor literal do primeiro verdadeiro
*/

/*
    Valores que resultam em false
    false -> literal
    0
    '' -> Strings vazias
    null / undefined
    NaN
*/

function falaOi() {
    return 'Oi';
}

// Com o short-circuit &&
const vaiExecutar = 'Gabriel';
console.log(vaiExecutar && falaOi());   // Ao invés de criar uma condicional para verificar o valor, ele irá retornar o primeiro falso

// Short-circuit ||
const corUsuario = null;
const corPadrao = 'Azul';
console.log(corUsuario || corPadrao);   // Ao invés de criar uma condicional para verificar o valor, ele irá retornar o primeiro verdadeiro