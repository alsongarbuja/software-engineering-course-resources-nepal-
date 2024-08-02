// interface between js and html+css =DOM

var h = document.querySelector("h1");
h.style.color = "red";

var b = document.getElementById("box");
b.style.border = "2px solid";
b.style.height = "200px";

// var bx = document.getElementsByClassName("boxes");
// bx.style.border = "1px solid";
// bx.style.height = "100px";

var a = document.getElementById("none");
a.style.color = "green";
console.log(a.getAttribute("href"));

function swap_color()
{
    h.style.color = "green";
    a.style.color = "red";
}