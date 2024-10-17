let r = +prompt("Введите r:");
p = Perimetr (10, r );
console.log("Perimetr n10= ", p);
p1 = Perimetr(50, r);
console.log("Perimetr n50= ", p1);
p2 = Perimetr(100, r);
console.log("Perimetr n100= ", p2);
let n = +prompt("Введите n")
p3 = Perimetr(n, r);
console.log("Perimetr n= ", p3);
function Perimetr(n, r)
{
    let a = 2 * r * Math.sin(180/n);
    let p = n * a;
    return p;
} 
