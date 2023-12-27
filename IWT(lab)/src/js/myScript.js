function loadData(data){
    if(data == "btn1"){
        document.getElementById("phoneImg").src = "images/iphone.jpg";
        document.getElementById("para").innerHTML = "iPhone SE is as durable as it is beautiful, and features an aerospace-grade aluminum and glass design.";
    }
    else if (data == "btn2") {
        document.getElementById("phoneImg").src = "images/nokia.png";   
        document.getElementById("para").innerHTML = "As a technology leader across mobile, fixed and cloud networks, our solutions enable a more productive, sustainable and inclusive world.";
    }

    else if (data == "btn3") {
        document.getElementById("phoneImg").src = "images/samsung.jpg";  
        document.getElementById("para").innerHTML = "Samsung phone price in Sri Lanka. Buy Samsung phone for best price. It has very latest models with warranty and other services such as island-wide delivery.";
    }

    else if (data == "btn4") {
        document.getElementById("phoneImg").src = "images/oppo.jpg";
        document.getElementById("para").innerHTML = "Find your favorite smartphone from the latest mobile phone list by OPPO. Check out selective products as: OPPO Find X3 Pro, OPPO Reno5 Pro 5G, OPPO A94."; 
    }

    else{
        alert("Invalid! ");
    }

}
function productForInLoop() {

    var phone = ["iphone = Rs.30000", "Nokia = Rs.700" , "samusng = Rs.30000", "Oppo = Rs. 600"];

    document.getElementById("phoneImg").src = "images/phone1.jpg";

    var message ="list of prices (using for loop)<br><br>"; 
    
    var len = phone.length;

    for (var i=0; i<len; i++){
        message += phone[i] + "<br>";
    }

    document.getElementById("para").innerHTML = message;
}

function priceHigher(){
    var phone = {iphone :28000, Nokia : 700 , samusng : 30000, Oppo :  600};
    
    let text = "";

    for (let x in phone) {
        if(phone[x] >1000)
        
             text += x + " : " + phone[x]  + "<br/>" ;
    }

    document.getElementById("para").innerHTML = text;
    
}

function priceLower(){
    var phone = {iphone :28000, Nokia : 700 , samusng : 30000, Oppo :  600};
    
    let text = "";

    for (let x in phone) {
        if(phone[x] < 800)
        
             text += x + " : " + phone[x]  + "<br/>" ;
    }

    document.getElementById("para").innerHTML = text;
    
}