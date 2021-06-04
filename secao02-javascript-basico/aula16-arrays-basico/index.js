const alunos = ['Luiz', 'Maria', 'João'];
console.log(alunos);

const removido = alunos.pop(); // alunos.pop() remove o último elemento do array
console.log(removido);
console.log(alunos);

alunos[0] = 'Eduardo';
console.log(alunos);

alunos[alunos.length] = 'Luiza';
alunos[alunos.length] = 'Fábio';
alunos[alunos.length] = 'Luana';
console.log(alunos);

alunos.push('Gabriel'); // Adiciona um elemento no final do array
console.log(alunos);

alunos.unshift('Luiz'); // Adiciona um elemento no começo do array
console.log(alunos);