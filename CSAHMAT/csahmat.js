let main = []
let copy =[]
const s = +prompt('введите длину строки')
for(let i = 1;i<s+1;i++){
    let abc = +prompt('введите точку')
    main.push(abc)
    console.log(abc);
}
for (let i = main.length -1; i >= 0; i--){
    copy.push(main[i])
}
console.log(copy)