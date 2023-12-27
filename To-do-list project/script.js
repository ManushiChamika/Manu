const inputBox = document.getElementById("input-box");
const listContainer = document.getElementById("list-container");

function addTask(){
    if(inputBox.value === ''){
        alert("You must write something!");
    }
    else{
        let li = document.createElement("li");
        //Important
        li.innerHTML = inputBox.value;
        listContainer.appendChild(li);
        //Add close item
        let span = document.createElement("span");
        span.innerHTML ="\u00d7";
        li.appendChild(span);
    }
    //To remove the text after added
    inputBox.value="";
}

//When we cut it erases from the to-do list
listContainer.addEventListener("click", function(e){
    if(e.target.tagName === "LI"){
        //Toggle
        e.target.classList.toggle("checked");
    }
    else if(e.target.tagName === "SPAN"){
        e.target.parentElement.remove();
    }
}, false);