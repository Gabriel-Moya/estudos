// Escreva uma função que recebe um número e retorne o seguinte:
// Número divísivel por 3 = Fizz
// Número divísivel por 5 = Buzz
// Número divísivel por 3 e 5 = FizzBuzz
// Número NÃO é divísivel por 3 e 5 = Próprio número
// Checar se o input é realmente um número = retorna o próprio input
// Use a função com números de 0 a 100

function FizzBuzz(x) {

    if (!(typeof x === 'number')){
        return x;
    }

    if (x % 3 === 0 && x % 5 === 0){
        return 'FizzBuzz';
    }

    if (x % 3 === 0){
        return 'Fizz';
    }

    if (x % 5 === 0){
        return 'Buzz';
    }

    if (!(x % 3 === 0) && !(x % 5 === 0)){
        return x;
    }
}

console.log('a', FizzBuzz('a'));
for (let i = 0; i <= 100; i++){
    console.log(i, FizzBuzz(i));
}