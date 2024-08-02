var num1 = 3, num2 = 4;

function sum_sub(n1, n2){
    console.log(n1+n2);
    return n1-n2;
}

console.log(sum_sub(num1, num2));
console.log(sum_sub(55, 12));

function getLocation(name, extra = "taltira"){
    if(name == "alson" || name == "prakash"){
        console.log("Bagar");
    }else if(name == "yogesh"){
        console.log("NayaBazar");
        console.log(extra);
    }else if(name == "uzwal"){
        console.log("Khaltemasina");
    }else if(name == "sunil"){
        console.log("Nadipur");
    }else{
        console.log("Name de be");
    }
}

getLocation("yogesh", "khai kata tira ho");

// wap to print differences, sum, division, mul, porvided by the users.
// implement with four types of function.