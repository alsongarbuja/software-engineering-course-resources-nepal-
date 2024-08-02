var task = [];
var ul = document.getElementById("list");
var cUl = document.getElementById("cList");
var to_dos = document.querySelector("#task");

function add()
{
    if(to_dos.value){
        task.push(
            {
                name: to_dos.value,
                isComplete: false
            }
        );
        to_dos.value = "";
        render();
    }
}

to_dos.addEventListener("keydown", function(event){
        if(event.keyCode == 13){
                add();
        }
});

function changeStatus(task1)
{
    if(task1.isComplete == false){
        task1.isComplete = true;
    }else{
        task1.isComplete = false;
    }
}

function render(){
    var completed = "";
    var incomplete = "";
    task.forEach(function(t, ind){
        if(t.isComplete){
            completed += "<li><input type='checkbox' title = 'Mark as uncomplete' onclick = 'changeStatus(task["+ ind + "]); render() ;' checked >" + t.name + "</li><br/>" ;
        }else{
            incomplete += "<li><input type='checkbox' title = 'Mark as complete' onclick = 'changeStatus(task["+ ind + "]); render() ;' >" + t.name + "</li><br/>" ;
        }
    })
    ul.innerHTML = incomplete ;
    cUl.innerHTML = completed ;
}

