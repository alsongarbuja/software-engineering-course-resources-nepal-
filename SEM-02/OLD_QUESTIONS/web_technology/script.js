var uName = document.getElementById("user");
var eMail = document.getElementById("em");
var pNum = document.getElementById("phn");

function validate(){
    if(!uName.value || !eMail.value){
        alert("no empty please!!!");
    };
    if(isNaN(pNum.value)){
        alert("No letters in phone number.");
    };

    var atPos = eMail.value.indexOf("@");
    var dotPos = eMail.value.indexOf(".");

    if(atPos < 1 || dotPos+3 > eMail.value.length){
        alert("invalid email!!!");
    }
}