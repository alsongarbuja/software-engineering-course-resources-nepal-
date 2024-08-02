
var menu = document.querySelector(".menu");
var toc = document.querySelector(".stackedit__left");
var list = document.querySelector(".stackedit__toc");
// .children.item(0).children.item(0).children.item(1).children;
var closeMenu = document.querySelector(".closeMenu");
var mainList = document.querySelectorAll(".mainLink");
var codeList = document.querySelectorAll("code");

if(!localStorage.getItem("nightMode")){
    localStorage.setItem("nightMode", "0");
}

function modeChoose(){
    if(localStorage.getItem("nightMode") == "1"){
        document.querySelector(".stackedit__right").style.backgroundColor = "#1b1b1b";
        document.querySelector(".stackedit__right").style.color = "#dddddd";
        toc.style.backgroundColor = "#1d1d1d";
        
        for(var i = 0; i< mainList.length; i++){
            mainList[i].style.color = "#dddddd";
        }
    
        night.style.backgroundColor = "#a9a9a9d8";
        night.style.color = "#333333";
    
        menu.style.backgroundColor = "#a9a9a9d8";
        menu.style.color = "#000000";
    
        closeMenu.style.backgroundColor = "#a9a9a9d8";
        closeMenu.style.color = "#000000";

        for(var i = 0; i < codeList.length; i++){
            codeList[i].style.backgroundColor = "#00000055";
        }
    }else{
        document.querySelector(".stackedit__right").style.backgroundColor = "#ffffff";
        document.querySelector(".stackedit__right").style.color = "#000000";
        toc.style.backgroundColor = "#f8f8f8";
        toc.style.color = "#888";
        
        for(var i = 0; i< mainList.length; i++){
            mainList[i].style.color = "rgba(0,0,0,.75)";
        }
    
        night.style.backgroundColor = "coral";
        night.style.color = "#000000";
    
        menu.style.backgroundColor = "#f07c7c";
        closeMenu.style.backgroundColor = "#d68e8e";

        for(var i = 0; i < codeList.length; i++){
            codeList[i].style.backgroundColor = "rgba(0,0,0,.05)";
        }
    }
}

menu.addEventListener('click', function(){
    toc.classList.add("active-sidebar");
    closeMenu.style.display = "block"; 
});

function closeSideBar(){
    toc.classList.remove("active-sidebar");
    closeMenu.style.display = "none";
}

// for(var i = 0; i < list.length; i++){
    list.addEventListener('click', closeSideBar);
// }

if(toc.classList.contains("active-sidebar")){
    document.addEventListener('click', closeSideBar);
}

closeMenu.addEventListener('click', closeSideBar);

var night = document.querySelector(".night");

night.addEventListener('click', function(){
    
    if(localStorage.getItem("nightMode") == "0"){
        document.querySelector(".stackedit__right").style.backgroundColor = "#1b1b1b";
        document.querySelector(".stackedit__right").style.color = "#dddddd";
        toc.style.backgroundColor = "#1d1d1d";
        
        for(var i = 0; i< mainList.length; i++){
            mainList[i].style.color = "#dddddd";
        }

        night.style.backgroundColor = "#a9a9a9d8";
        night.style.color = "#333333";

        menu.style.backgroundColor = "#a9a9a9d8";
        menu.style.color = "#000000";

        closeMenu.style.backgroundColor = "#a9a9a9d8";
        closeMenu.style.color = "#000000";

        for(var i = 0; i < codeList.length; i++){
            codeList[i].style.backgroundColor = "#00000055";
        }

        localStorage.setItem("nightMode", "1");
    }else{
        document.querySelector(".stackedit__right").style.backgroundColor = "#ffffff";
        document.querySelector(".stackedit__right").style.color = "#000000";
        toc.style.backgroundColor = "#f8f8f8";
        toc.style.color = "#888";
        
        for(var i = 0; i< mainList.length; i++){
            mainList[i].style.color = "rgba(0,0,0,.75)";
        }

        night.style.backgroundColor = "coral";
        night.style.color = "#000000";

        menu.style.backgroundColor = "#f07c7c";
        closeMenu.style.backgroundColor = "#d68e8e";

        for(var i = 0; i < codeList.length; i++){
            codeList[i].style.backgroundColor = "rgba(0,0,0,.05)";
        }

        localStorage.setItem("nightMode", "0");
    }
});