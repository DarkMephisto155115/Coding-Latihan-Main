function genap_ganjil(){
    var inputEl = document.getElementById("input-el").value;
    console.log(inputEl)
    if ((inputEl%2) == 0){ // Genap
        console.log("Genap")
        document.getElementById("display-hasil").innerText = "Genap"
        
    }else if ((inputEl%2) == 1){ // Ganjil
        console.log("Ganjil")
        document.getElementById("display-hasil").innerText = "Ganjil"
    }

}

function index_nilai(){
    var inputEl_nilai = document.getElementById("input-el-nilai").value;
    if (inputEl_nilai >= 80 && inputEl_nilai <= 100){ 
        document.getElementById("display-hasil-nilai").innerText = "A"}
    else if (inputEl_nilai >= 70 && inputEl_nilai <= 79){ 
        document.getElementById("display-hasil-nilai").innerText = "AB"}
    else if (inputEl_nilai >= 60 && inputEl_nilai <= 69){ 
        document.getElementById("display-hasil-nilai").innerText = "B"}
    else if (inputEl_nilai >= 50 && inputEl_nilai <= 59){ 
        document.getElementById("display-hasil-nilai").innerText = "BC"}
    else if (inputEl_nilai >= 40 && inputEl_nilai <= 49){ 
        document.getElementById("display-hasil-nilai").innerText = "C"}
    else if (inputEl_nilai >= 30 && inputEl_nilai <= 39){ 
        document.getElementById("display-hasil-nilai").innerText = "D"}
    else if (inputEl_nilai >= 0 && inputEl_nilai <= 29){ 
        document.getElementById("display-hasil-nilai").innerText = "E"}
}