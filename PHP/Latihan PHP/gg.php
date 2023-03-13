<html>

<body>
    <h1> Index nilai </h1>
    <form method="post">
        <label>Nilai</label><br>
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