var total = 0
var i = 0

function kasir_sistem(){
    var i = 0
    var inputEl = document.getElementById("input-el").value;    
    var container = document.getElementById("div-2");
    while (container.hasChildNodes()) {
        container.removeChild(container.lastChild);
    }
    for (i=0 ;i<inputEl ;i++){
    container.appendChild(document.createTextNode("Harga Belanjaan " + (i+1) + " "));
    var input = document.createElement("input");
                input.type = "value";
                input.id = "input-harga-" + i;
                container.appendChild(input);
                container.appendChild(document.createElement("br"));
    }
}

function kasir_kalkulasi(){
    var inputEl = document.getElementById("input-el").value;
    for (i = 0 ; i < inputEl ; i++ ){
        var harga = document.getElementById("input-harga-" + i).value; 
        total += parseInt(harga) 
    }
    if (total >= 75000){
        document.getElementById("display-hasil").innerHTML = "Total Belanjaan sebelum diskon Rp. " + total
        var diskon = total * 0.2;
        total -= diskon;
        document.getElementById("display-hasil-2").innerHTML = "Total Belanjaan sebelum diskon Rp. " + total
    }else{
        document.getElementById("display-hasil").innerHTML = "Total Belanjaan adalah Rp. " + total
        document.getElementById("display-hasil-2").innerHTML = " "
    }
    total = 0
}