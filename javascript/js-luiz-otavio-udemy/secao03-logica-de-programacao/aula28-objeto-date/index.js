// Data 0: 01/01/1970

const data0 = new Date(0);
console.log(data0);
console.log(data0.toString());

const data = new Date();
console.log();
console.log(data);
console.log(data.toString());

//                         ano  mês dia hr  min seg, ms
const outraData = new Date(2021, 5, 27, 20, 17, 60);
console.log();
console.log(outraData);
console.log(outraData.toString());

// Passando a data em formato reconhecido
const dataString = new Date('2021-05-27 22:08:53.182');
console.log();
console.log(dataString);
console.log(dataString.toString());
console.log('Dia', dataString.getDate());
console.log('Mês', dataString.getMonth());
console.log('Ano', dataString.getFullYear());
console.log('Hora', dataString.getHours());
console.log('Min', dataString.getMinutes());
console.log('Seg', dataString.getSeconds());
console.log('ms', dataString.getMilliseconds());
console.log('Dia semana', dataString.getDay());

// Trás a data em ms a partir da data 0
console.log(Date.now())