let a = '6 10 7 14 12 12 -2 3 -9 6 -10';
let arrey = [];
let sum = 0;

const result = a.split(" ");
for (let i = 0; i < result.length; i++) {
    arrey.push(Number(result[i])); 
}

for (let i = 0; i < arrey.length; i++) {
    if (arrey[i] % 2 === 0 && arrey[i] % 3 !== 0) {
        
        console.log(arrey[i]); 
        sum += arrey[i]; 
    }
}

console.log("Сумма выбранных чисел:", sum);
