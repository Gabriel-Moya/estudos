try {
    console.log(naoExisto);
} catch (err) {
    console.log('O valor que está tentando exibir não existe.');
    
    // Não exiba o erro diretamente como abaixo
    //console.log(err);
}

function soma (x, y) {
    if (typeof x !== 'number' || typeof y !== 'number') {
        throw new Error ('X e Y precisam ser números');
    }

    return x + y;
}

try {
    console.log(soma(1, 2));
    console.log(soma('1', 2));
} catch(error) {
    // console.log(error);
    console.log('Alguma mensagem amigável');
}