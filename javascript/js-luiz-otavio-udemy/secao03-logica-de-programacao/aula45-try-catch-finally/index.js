try {
    // Executa quando não há erros
} catch (error) {
    // É executado somente quando há erros
} finally {
    // Sempre será executado
}

try {
    /* console.log(a); */
    console.log('Abri um arquivo');
    console.log('Manipulei um arquivo e gerou erro');
    console.log('Fecha o arquivo');
} catch (error) {
    console.log('Tratando o erro');
} finally {
    console.log('FINALLY: Sempre será executado esse trecho');
}

console.log('########');
function retornaHora(data) {
    if (data && !(data instanceof Date)) {
        throw new TypeError('Esperando instância de date');
    }

    if (!data) {
        data = new Date();
    }

    return data.toLocaleTimeString('pt-BR', {
        hour: '2-digit',
        minute: '2-digit',
        second: '2-digit',
        hour12: false
    });
}

try {
    const data = new Date('01-01-1970 12:58:12');
    console.log(data);
} catch (e) {
    // Tratar erro aqui
    // console.log(e);
} finally {
    console.log('Tenha um bom dia.')
}

const hora = retornaHora();
console.log(hora);