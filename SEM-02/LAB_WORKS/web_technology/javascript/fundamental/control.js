switch (new Date().getDay()){
    case 0:
        console.log("Sunday");
        break;
        
    case 1:
        console.log("monday");
        break;

    case 2:
        console.log("tuesday");
        break;
        
    case 3:
        console.log("wednesday");
        break;
        
    case 4:
        console.log("Thursday");
        break;

    case 5:
        console.log("Friday");
        break;

    case 6:
        console.log("saturday");
        break;

    default:
        console.log("Invalid");
}

var q = prompt("You want to loop: ");
var n = parseInt(prompt("Times to loop:"));
var i = 0;

while(q != "no"){
    for(i; i<n; i++){
        console.log("Yeah BaBy");
    }
    q = prompt("You want to loop: ");
}    