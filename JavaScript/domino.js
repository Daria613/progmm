let a ='4 11';
 let b='3 5 6 9 10 12 15 20 21 24 30';
let array = [];
let resultMacsha = 0;
let resultLena = 0;
 const result =a.split(" ");
const srt= b.split(" ");
 for (let i = 0; i < b.length; i++) (

 array.push(b[i])

)
console.log(Number(srt[0]));
console.log(Number(srt[1]));
console.log(array);
const d = Number(srt[0]);
const c= Number(srt[1]);
for (let i=0; i < array.length; i++) {
if (array[i] %3===0 && array[i] %5===0)
continue;
else if (array[i] %3===0) {
resultMacsha += 1;
} else if (array[i] % 5===0) {
resultlena += 1;
}
if (resultMacsha == d && resultLena == d) {
break;
}
}
if (resulthacsha > resultLena) {
console.log("Macsha");
}

else if (resultMacsha < resultLena) {

console.log("Lena");

}
else if (resultMacsha == resultLena){
console.log("drusba");
}
