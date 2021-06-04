const nome = 'Gabriel';
const sobrenome = 'Moya';
const idade = 24;
const peso = 76;
const altura = 1.78;

let imc = peso/(altura*altura);

console.log(`${nome} ${sobrenome} tem ${idade} anos, pesa ${peso}Kg e ${altura} de altura, seu IMC é ${imc.toFixed(2)}`);