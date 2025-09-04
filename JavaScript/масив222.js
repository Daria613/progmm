let a = [2, 3, 1, 0, 10,  28, 27, 31];
let b=[ a[0]]
let i = 0;

for(i=0; i < a.length; i++) {
    let h = a[i]
    let v =a[i+1]
    if ( h<v){

    b.push(v);
}
console.log (b);
}