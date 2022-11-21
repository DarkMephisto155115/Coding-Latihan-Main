
<?php
$diskon = 0.2;
$harga = intval(readline("Masukan banyak barang belanjaan : "));
$harga_semua_barang = array()
?>

<?php
foreach (range(1, $harga) as $hargaBarang) {
    $hargaBarang = intval(readline("Masukan harga barang : "));
    $harga_total[] = $hargaBarang;
}
?>

<?php
$diskon_harga = array_sum($harga_total);
echo "Total belanjaan sebelum diskon Rp.", strval($diskon_harga);
$diskon_harga_total = intval($diskon_harga) - intval($diskon_harga) * $diskon;
?>

<?php
if ($diskon_harga > 75000) {
    echo "Total belanjaan setelah diskon Rp.", strval($diskon_harga_total);
} else {
    echo "Anda tidak mendapatkan potongan harga!";
}
?>

