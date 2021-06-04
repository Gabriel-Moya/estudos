console.log(`Trabalhando com condicionais\n`);

const destinos = new Array(
    `Salvador`,
    `São Paulo`,
    `Rio de Janeiro`
);

const idadeComprador = 18;
const estaAcompanhada = true;
const temPassagemComprada = true;

console.log("Destinos possíveis");
console.log(destinos,"\n");

if (idadeComprador >= 18 || estaAcompanhada == true) {
    destinos.splice(1, 1);
} else {
    console.log("Não é maior de idade nem está acompanhado, não posso vender");
}

console.log("Embarque:\n");
if(idadeComprador && temPassagemComprada){
    console.log("Boa viagem!");
} else {
    console.log("Não é possível embarcar");
}

console.log(destinos);