const pontuacaoUsuario = 999;

// (condicao) ? 'Valor para verdadeiro' : 'Valor para falso';
const nivelUsuario = pontuacaoUsuario >= 1000 ? 'Usuário VIP' : 'Usuário normal';
console.log(nivelUsuario);

// A operação acima é o mesmo que eu tivesse da forma abaixo
/* if (pontuacaoUsuario >= 1000) {
    console.log('Usuário VIP');
} else {
    console.log('Usuário normal');
} */

const bgUsuario = null;
const bgPadrao = bgUsuario || 'Preto';
console.log(bgPadrao)

const bgUsuario2 = 'Amarelo';
const bgPadrao2 = bgUsuario2 || 'Preto';
console.log(bgPadrao2)