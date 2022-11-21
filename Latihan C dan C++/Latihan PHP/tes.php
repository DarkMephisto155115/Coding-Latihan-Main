<?php
$user_check = 'Daspro';
$pass_check = 'PPL4s!k';
$i = 1;
$max = 3;
$counter = 2;
while($i <= $max){
    $user = readline("Masukkan Username Anda : ");
    $pass = readline("Masukkan Password Anda : ");
    if ($user == $user_check and $pass == $pass_check){
        echo "Selamat, Anda berhasil login!".PHP_EOL;
        break;
    }
    else{
        if ($counter == 0) {
            echo "Coba lagi besok".PHP_EOL;
        }else{
            echo "Login gagal, percobaan tersisa ".$counter. " kali".PHP_EOL;
        }
    }
    $i++;
    $counter--;
}
?>
