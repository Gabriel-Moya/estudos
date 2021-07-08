// Escreva uma funcção chamada ePaisagem que recebe dois argumentos, largura e altura, de uma imagem (number).
// Retorne true se a imagem estiver no modo paisagem.

function ePaisagem(x, y) {
    return x > y;
}

console.log(ePaisagem(1920, 1080));

// Arrow function
const ePaisagem2 = (x, y) => x > y;
console.log(ePaisagem2(1080, 1920));