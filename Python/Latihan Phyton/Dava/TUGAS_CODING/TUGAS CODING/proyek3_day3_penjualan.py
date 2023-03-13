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
#Silahkan masukkan jawaban day-3 mulai dari bagian di bawah ini

pembelian_barang = str(input())
while (pembelian_barang != kodeBarang_1) ^ (pembelian_barang != kodeBarang_2) ^ (pembelian_barang != kodeBarang_3):
    print("Mohon maaf, barang tidak ditemukan")
    pembelian_barang = str(input())
else:
    if pembelian_barang == kodeBarang_1:
        jmlh_beli_brng_1 = int(input())
        ttl_harga_1 = jmlh_beli_brng_1 * hargaBarang_1
        beli_2 = False
        beli_3 = False
        re_input = str(
            input("Apakah anda ingin menambah barang lagi?(y/n)"))
        while re_input == "y" and "Y":
            pembelian_barang = str(input())
            while (pembelian_barang != kodeBarang_1) ^ (pembelian_barang != kodeBarang_2) ^ (pembelian_barang != kodeBarang_3):
                print("Mohon maaf, barang tidak ditemukan")
                pembelian_barang = str(input())
            else:
                if pembelian_barang == kodeBarang_2:
                    jmlh_beli_brng_2 = int(input())
                    ttl_harga_2 = jmlh_beli_brng_2 * hargaBarang_2
                    re_input = str(
                        input("Apakah anda ingin menambah barang lagi?(y/n)"))
                    beli_2 = True
                elif pembelian_barang == kodeBarang_3:
                    jmlh_beli_brng_3 = int(input())
                    ttl_harga_3 = jmlh_beli_brng_3 * hargaBarang_3
                    re_input = str(
                        input("Apakah anda ingin menambah barang lagi?(y/n)"))
                    beli_3 = True

        else:
            print(
                "\n=======================================\nNama Brg | Jml | Total Harga |")
            print(namaBarang_1, "|", jmlh_beli_brng_1, "|", ttl_harga_1, "|")
            if beli_2 == True:
                print(namaBarang_2, "|", jmlh_beli_brng_2,
                      "|", ttl_harga_2, "|")
            if beli_3 == True:
                print(namaBarang_3, "|", jmlh_beli_brng_3,
                      "|", ttl_harga_3, "|")
            print("=======================================")

    elif pembelian_barang == kodeBarang_2:
        jmlh_beli_brng_2 = int(input())
        ttl_harga_2 = jmlh_beli_brng_2 * hargaBarang_2
        beli_1 = False
        beli_3 = False
        re_input = str(
            input("Apakah anda ingin menambah barang lagi?(y/n)"))
        while re_input == "y" and "Y":
            pembelian_barang = str(input())
            while (pembelian_barang != kodeBarang_1) ^ (pembelian_barang != kodeBarang_2) ^ (pembelian_barang != kodeBarang_3):
                print("Mohon maaf, barang tidak ditemukan")
                pembelian_barang = str(input())
            else:
                if pembelian_barang == kodeBarang_1:
                    jmlh_beli_brng_1 = int(input())
                    ttl_harga_1 = jmlh_beli_brng_1 * hargaBarang_1
                    re_input = str(
                        input("Apakah anda ingin menambah barang lagi?(y/n)"))
                    beli_1 = True
                elif pembelian_barang == kodeBarang_3:
                    jmlh_beli_brng_3 = int(input())
                    ttl_harga_3 = jmlh_beli_brng_3 * hargaBarang_3
                    re_input = str(
                        input("Apakah anda ingin menambah barang lagi?(y/n)"))
                    beli_3 = True

        else:
            print(
                "\n=======================================\nNama Brg | Jml | Total Harga |")
            print(namaBarang_2, "|", jmlh_beli_brng_2, "|", ttl_harga_2, "|")
            if beli_1 == True:
                print(namaBarang_1, "|", jmlh_beli_brng_1,
                      "|", ttl_harga_1, "|")
            if beli_3 == True:
                print(namaBarang_3, "|", jmlh_beli_brng_3,
                      "|", ttl_harga_3, "|")
            print("=======================================")

    elif pembelian_barang == kodeBarang_3:
        jmlh_beli_brng_3 = int(input())
        ttl_harga_3 = jmlh_beli_brng_3 * hargaBarang_3
        beli_1 = False
        beli_2 = False
        re_input = str(
            input("Apakah anda ingin menambah barang lagi?(y/n)"))
        while re_input == "y" and "Y":
            pembelian_barang = str(input())
            while (pembelian_barang != kodeBarang_1) ^ (pembelian_barang != kodeBarang_2) ^ (pembelian_barang != kodeBarang_3):
                print("Mohon maaf, barang tidak ditemukan")
                pembelian_barang = str(input())
            else:
                if pembelian_barang == kodeBarang_1:
                    jmlh_beli_brng_1 = int(input())
                    ttl_harga_1 = jmlh_beli_brng_1 * hargaBarang_1
                    re_input = str(
                        input("Apakah anda ingin menambah barang lagi?(y/n)"))
                    beli_1 = True
                elif pembelian_barang == kodeBarang_2:
                    jmlh_beli_brng_2 = int(input())
                    ttl_harga_2 = jmlh_beli_brng_2 * hargaBarang_2
                    re_input = str(
                        input("Apakah anda ingin menambah barang lagi?(y/n)"))
                    beli_2 = True

        else:
            print(
                "\n=======================================\nNama Brg | Jml | Total Harga |")
            print(namaBarang_3, "|", jmlh_beli_brng_3, "|", ttl_harga_3, "|")
            if beli_1 == True:
                print(namaBarang_1, "|", jmlh_beli_brng_1,
                      "|", ttl_harga_1, "|")
            if beli_2 == True:
                print(namaBarang_2, "|", jmlh_beli_brng_2,
                      "|", ttl_harga_2, "|")
            print("=======================================")

#Ini adalah batas akhir jawaban day-3 !!!!