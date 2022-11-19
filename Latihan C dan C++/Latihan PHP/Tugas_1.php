<html>

<body>
    <h1> Kasir Sistem </h1>
    <form method="post">
        <label>Sistem Kasir</label><br>
        <h1>Banyak Belanjaan</h1>
        <input type="number" name="nilai">

        <input type="submit" value="submit">
    </form>
</body>

<?php

$nilai = $_POST['nilai'];
if ($persen % 2 == 0) {
    echo "Angka Genap";
} else {
    echo "Angka Ganjil";
}

?>

</html>