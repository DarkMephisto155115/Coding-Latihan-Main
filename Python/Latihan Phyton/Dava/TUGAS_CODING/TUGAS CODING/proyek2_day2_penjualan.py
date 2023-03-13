#Silahkan masukkan jawaban day-1 mulai dari bagian di bawah ini

#input barang pertama (1)
namaBarang_1 = str(input("Input Nama Barang 1 : "))
kodeBarang_1 = str(input("Input Kode Barang 1 : "))
hargaBarang_1 = float(input("Input Harga Barang 1 : "))
jumlahBarang_1 = int(input("Input Jumlah Barang 1 : "))
diskonBarang_1 = float(input("Input Diskon Barang 1 : "))

#input barang kedua (2)
namaBarang_2 = str(input("Input Nama Barang 2 : "))
kodeBarang_2 = str(input("Input Kode Barang 2 : "))
hargaBarang_2 = float(input("Input Harga Barang 2 : "))
jumlahBarang_2 = int(input("Input Jumlah Barang 2 : "))
diskonBarang_2 = float(input("Input Diskon Barang 2 : "))

#input barang ketiga (3)
namaBarang_3 = str(input("Input Nama Barang 3 : "))
kodeBarang_3 = str(input("Input Kode Barang 3 : "))
hargaBarang_3 = float(input("Input Harga Barang 3 : "))
jumlahBarang_3 = int(input("Input Jumlah Barang 3 : "))
diskonBarang_3 = float(input("Input Diskon Barang 3 : "))

#Ini adalah batas akhir jawaban day-1 !!!!
#Silahkan masukkan jawaban day-2 mulai dari bagian di bawah ini

#inputan pembelian
pembelian_barang = str(input())
if pembelian_barang == kodeBarang_1:
    jmlh_beli_barang = int(input())
    total_harga = jmlh_beli_barang * hargaBarang_1
    print("=======================================\nNama Brg | Jml | Total Harga |")
    print(namaBarang_1, "|", jmlh_beli_barang, "|", total_harga, "|")
elif pembelian_barang == kodeBarang_2:
    jmlh_beli_barang = int(input())
    total_harga = jmlh_beli_barang * hargaBarang_2
    print("=======================================\nNama Brg | Jml | Total Harga |")
    print(namaBarang_2, "|", jmlh_beli_barang, "|", total_harga, "|")
elif pembelian_barang == kodeBarang_3:
    jmlh_beli_barang = int(input())
    total_harga = jmlh_beli_barang * hargaBarang_3
    print("=======================================\nNama Brg | Jml | Total Harga |")
    print(namaBarang_3, "|", jmlh_beli_barang, "|", total_harga, "|")
else:
    print("Mohon maaf, barang tidak ditemukan")

#Ini adalah batas akhir jawaban day-2 !!!!