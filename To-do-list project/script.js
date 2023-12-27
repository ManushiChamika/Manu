const inputBox = document.getElementById("input-box");
const listContainer = document.getElementById("list-container");

function addTask(){
    if(inputBox.value === ''){
        alert("You must write something!");
    }
    else{
        let li = document.createElement("li");
        //important
        li.innerHTML = inputBox.value;
        listContainer.appendChild(li);
        // add close item
        let span = document.createElement("span");
        span.innerHTML ="\u00d7";
        li.appendChild(span);
    }
    //to remove the text after added
    inputBox.value="";

}

//when we cut it erases from the to-do list
listContainer.addEventListener("click", function(e){
    if(e.target.tagName === "LI"){
        //Toggle
        e.target.classList.toggle("checked");
    }
    else if(e.target.tagName === "SPAN"){
        e.target.parentElement.remove();
    }
}, false);