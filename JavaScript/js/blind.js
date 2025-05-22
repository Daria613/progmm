let str1 = ["й", "ц", "у", "к", "е", "н", "г", "ш", "щ", "з", "х", "ъ", ];
let str2 = ["ф", "ы", "в", "а", "п", "р", "о", "л", "д","ж", "э",  ];
let str3 = ["я", "ч", "c", "м", "и", "т", "б", "ю",];
let ar3 = [];
let ar4 = [];

let st = "";
let k;
let c;
let wstr;
let numb;
let lw = 1;


while (true) {

    if (lw == 1){
    startgame();

    if (wstr == 1) {
        newgamest1(str1, numb);
    } else if (wstr == 2) {
        newgamest1(str2, numb);
    } else if (wstr == 3) {
        newgamest1(str3, numb);
    } else if (wstr == 4) {
        newgamest2(str1, str2, numb);
    } else if (wstr == 5) {
        newgamest2(str2, str3, numb);
    } else if (wstr == 6) {
        newgamestall(str1, str2, str3, ar4, numb);
    } else {
        alert("введите число от 1 до 6")
    }

    if (numb < 0) {
        alert("ошибка нажмите 1 чтобы продолжить");
    }}

    let player = prompt("напишите -  " + st);
    if (st == player) {
        alert("УРАА");
        lw = 1;
    }else {
        lw = 0;
        alert("Не получилось");
    }

        c = +prompt("хотите продолжить? Введите 0, если да");

        if (c != 0) {
            break;
        }
}

function startgame() {
    wstr = +prompt("1-3 =1,4-5=2,6=3");
    numb = +prompt("сколько хотите символов")
}


function getRandom(n) {
    return Math.floor(Math.random() * n);
}

function newgamest1(ar, n) {
    st = "";
    for (let i = 0; i < n; i++) {
        k = getRandom(ar.length);
        st += ar[k];
    }
}

function newgamest2(ar1, ar2, n) {
    st = "";
    ar3 = ar1.concat(ar2);
    for (let i = 0; i < n; i++) {
        k = getRandom(ar3.length);
        st += ar3[k];
    }
}

function newgamestall(ar1, ar2, ar3, ar4, n) {
    st = "";
    ar4 = ar1.concat(ar2, ar3);
    for (let i = 0; i < n; i++) {
        k = getRandom(ar4.length);
        st += ar4[k];
    }
}