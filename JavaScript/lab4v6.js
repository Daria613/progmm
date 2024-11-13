
function Storona(aaa, bbb, ccc)
{
let l = Math.sqrt(bbb*ccc*(Math.pow((bbb+ccc),2)-Math.pow(aaa, 2)))/bbb+ccc;
//console.log(l);
return l;
}
let a = +prompt('input a');
let b = +prompt('input b');
let c = +prompt('input c');

let result;
result = Storona(a,b,c);
alert(result);
