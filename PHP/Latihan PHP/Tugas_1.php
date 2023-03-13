<html>

<body>
    <h1> Login System </h1>
    <form method="post">
        <label></label><br>
        <h1>Masukkan Username</h1>
        <input type="text" name="user">
        <h1>Masukkan Password</h1>
        <input type="password" name="pass">
        <input type="submit" name="submit">
    </form>
</body>

<?php
function alert($msg)
{
    echo "<script type='text/javascript'>alert('$msg');</script>";
}
$user = $_POST['user'];
$pass = $_POST['pass'];
$counter = 3;
$i = 0;
if ($i < 3) {
    if ($user == "Daspro" && $pass == "PPL4s!k") {
        echo "Selamat, Anda berhasil login!";
    } else {
        $i++;
        $counter++;
        echo "Login gagal";
        if ($counter == 0) {
            echo "Coba lagi besok!";
        } else {
            echo "Login gagal, percobaan tersisa ";
        }
    }
} else {
    echo "Coba lagi besok!";
}
?>

</html>