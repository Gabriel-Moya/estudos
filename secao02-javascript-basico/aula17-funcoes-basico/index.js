function soma(x, y) {
    const resultado = x+y;
    return resultado;
}

const variavel = soma(4, 2);
console.log(variavel);

const raiz = function (n) {
    return n ** 0.5;
};

console.log(raiz(9));
console.log(raiz(16));
console.log(raiz(25));

const raiz2 = n => n ** 0.5;
console.log(raiz2(36));