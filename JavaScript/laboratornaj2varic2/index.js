
let x = 2; 
let y = 3; 
let c = 1;
let d = 2;

let e = 0;
let a;
let o;

if (x * y > 3) {
    a = Math.pow(x, 3); 
    o = Math.log10(Math.pow(x * y, c * d)); 
    e = Math.max(a, o); 
}
else if (x * y >= 0 && x * y <= 3) {
    a = Math.max(c * x, d * y); 
    e = 3 * Math.min(Math.min(x, y), a); 
}
else if (x * y < 0) {
    e = Math.pow(2, c * d) - x; 
}

console.log(e);