/*==================== Operadores aritméticos ====================*/

/*
    + Adição e concatenação
    - Subtração
    / Divisão
    * Multiplicação
    ** Potenciação
    % Resto da divisão
*/

const A = 2;
const B = 5;
const C = '10';
console.log(`A = ${A}\nB = ${B}\nC = ${C}\n`);

// Adição
console.log(`A + B = ${A+B}`);

// Concatenação
console.log(`A + C = ${A+C}`);

// Subtração
console.log(`B - A = ${B-A}`);

// Multiplicação
console.log(`A * B = ${A*B}`);

// Potenciação
console.log(`A ^ B = ${A**B}`);

// Resto da divisão
console.log(`B % A = ${B%A}\n`);


/*==================== Incremento e decremento ====================*/

/*
    ++ Incremento
    -- Decremento
*/

let D = 2;

// Incremento
D++;
console.log(`Incremento de "++" em D = ${D}`);

// Decremento
D--;
console.log(`Decremento de "--" em D = ${D}`); // Ele está diminuindo 1 depois de ter aumentado 1 na linha 44.


/*==================== Operadores de atribuição ====================*/

/*
    x += y -> É o mesmo que x = x + y
    x -= y -> É o mesmo que x = x - y
    x *= y -> É o mesmo que x = x * y
*/