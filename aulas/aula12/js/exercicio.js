let A = 'A'; // B
let B = 'B'; // C
let C = 'C'; // A
let temp;

console.log(A, B, C);

temp = A;
A = B;
B = C;
C = temp;

console.log(A, B, C);