banyak = int(input("Masukkan banyak barang belanjaan: "))
total = 0
i = 0
while i < banyak:
    harga_barang = int(input("Masukkan harga barang: "))
    i += 1
    total += harga_barang


if (total > 75000):
    diskon = total * 0.2
    total_bayar = total - diskon
    print(f"Total belanjaan sebelum diskon Rp. {int(total)}")
    print(f"Total belanjaan setelah diskon Rp. {int(total_bayar)}")
else:
    print(f"Total belanjaan Rp. {int(total)}")
