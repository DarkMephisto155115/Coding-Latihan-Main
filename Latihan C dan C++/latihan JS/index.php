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

$persen = $_POST['nilai'];
if ($persen > 100) {
    echo 'Nilai: Nilai Diluar Jangkauan';
} elseif ($persen >= 80) {
    echo 'Nilai: A';
} elseif ($persen >= 70) {
    echo 'Nilai: AB';
} elseif ($persen >= 60) {
    echo 'Nilai: ';
} elseif ($persen >= 50) {
    echo 'Nilai: BC';
} elseif ($persen >= 40) {
    echo 'Nilai: C';
} elseif ($persen >= 30) {
    echo 'Nilai: D';
} elseif ($persen >= 0) {
    echo 'Nilai: E';
} else {
    echo 'Nilai: Nilai Diluar Jangkauan';
}

?>

</html>