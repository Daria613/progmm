"use strict";
let counter = 0;
const intervaLId = setInterval (() => {
 console.log("Hello Word");
 counter += 1;
 if ( counter === 5){
    console.log("Done");
    clearInterval(intervaLId);
 }
},1000);