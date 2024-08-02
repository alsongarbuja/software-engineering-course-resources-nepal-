var uName = document.getElementById("user");
var eMail = document.getElementById("em");
var pNum = document.getElementById("phn");

var regEx = /^([a-zA-Z0-9\.-]+)@([a-z-]+)\.([a-z]{2,10})(\.[a-z])?$/

function validate(){
    if(!uName.value || !eMail.value){
        alert("no empty please!!!");
    };
    if(isNaN(pNum.value)){
        alert("No letters in phone number.");
    };
    if(!regEx.test(eMail.value)){
        alert("invalid email!!!");
    }
}