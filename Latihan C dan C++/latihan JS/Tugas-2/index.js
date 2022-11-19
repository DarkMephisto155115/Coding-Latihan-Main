var i = 0;
var counter = 3;
function login_system(form){
    if (i < 3){
        if(form.user.value == "Daspro" && form.pass.value == "PPL4s!k"){
            document.getElementById("display-hasil").innerHTML = "Selamat, Anda berhasil login!"
        }else{
            i += 1;
            counter -= 1;
            document.getElementById("display-hasil").innerHTML = " "
            if(counter == 0){
                alert("Coba lagi besok!")
            }else{
                alert("Login gagal, percobaan tersisa " + counter + " kali")

            }
        }  
    }else{
        alert("Coba lagi besok!")
    }
    
} 

