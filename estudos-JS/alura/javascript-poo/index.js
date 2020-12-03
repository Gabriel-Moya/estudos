import {Cliente} from "./Cliente.js"
import {ContaCorrente} from "./ContaCorrente.js"

const cliente1 = new Cliente("Gabriel", 11122233309);
const cliente2 = new Cliente("Alice", 88822233309);

const contaCorrenteGabriel = new ContaCorrente(1001, cliente1);
contaCorrenteGabriel.depositar(500);

const conta2 = new ContaCorrente(102, cliente2);
let valor = 200;
contaCorrenteGabriel.transferir(valor, conta2);

//conta2.saldo = 30000; <=== Retorna erro
console.log(ContaCorrente.numeroDeContas);