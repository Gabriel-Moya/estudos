import {Cliente} from "./Cliente.js"
import {ContaCorrente} from "./ContaCorrente.js"

const cliente1 = new Cliente();
cliente1.nome = "Gabriel";
cliente1.cpf = 11122233309;

const cliente2 = new Cliente();
cliente2.nome = "Alice";
cliente2.cpf = 88822233309;

const contaCorrenteGabriel = new ContaCorrente();
contaCorrenteGabriel.agencia = 1001;
contaCorrenteGabriel.cliente = cliente1;
contaCorrenteGabriel.depositar(500);

const conta2 = new ContaCorrente();
conta2.cliente = cliente2;
conta2.agencia = 102;

let valor = 200;
contaCorrenteGabriel.transferir(valor, conta2);

//conta2.saldo = 30000; <=== Retorna erro
console.log(conta2.saldo);