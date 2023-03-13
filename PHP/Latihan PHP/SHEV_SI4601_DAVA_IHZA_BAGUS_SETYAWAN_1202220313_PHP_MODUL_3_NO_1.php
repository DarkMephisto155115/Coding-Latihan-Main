<html>
<body>
<h1> Cari Angka Ganjil Dan Genap Menggunakan PHP</h1>
<form method="post">
    <label>Angka</label><br>
    <input type="angka" name="ang">
    <input type="submit" value="submit">
</form>
</body>
</html>

<?php
if($_POST){
    $angka=$_POST['ang'];
    if($angka%2==0){
        echo "$angka adalah Bilangan Genap";
    }else{
        echo "$angka adalah Bilangan Ganjil";
    }
}
?>