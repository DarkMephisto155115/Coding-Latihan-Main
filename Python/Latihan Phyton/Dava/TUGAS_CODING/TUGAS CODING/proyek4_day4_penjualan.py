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
#Silahkan masukkan jawaban day-4 mulai dari bagian di bawah ini

pembelian_barang = str(input())
while (pembelian_barang != kodeBarang_1) ^ (pembelian_barang != kodeBarang_2) ^ (pembelian_barang != kodeBarang_3):
    print("Mohon maaf, barang tidak ditemukan")
    pembelian_barang = str(input())
else:
    if pembelian_barang == kodeBarang_1:
        jmlh_beli_brng_1 = int(input())
        ttl_harga_1 = jmlh_beli_brng_1 * hargaBarang_1
        ttl_harga_2 = 0
        ttl_harga_3 = 0
        jmlh_beli_brng_2 = 0
        jmlh_beli_brng_3 = 0
        beli_1 = True
        beli_2 = False
        beli_3 = False
        input_ulang = str(
            input("Apakah anda ingin menambah barang lagi?(y/n)"))
        while input_ulang == "y":
            pembelian_barang = str(input())
            while (pembelian_barang != kodeBarang_1) ^ (pembelian_barang != kodeBarang_2) ^ (pembelian_barang != kodeBarang_3):
                print("Mohon maaf, barang tidak ditemukan")
                pembelian_barang = str(input())
            else:
                if pembelian_barang == kodeBarang_2:
                    jmlh_beli_brng_2 = int(input())
                    ttl_harga_2 = jmlh_beli_brng_2 * hargaBarang_2
                    input_ulang = str(
                        input("Apakah anda ingin menambah barang lagi?(y/n)"))
                    beli_2 = True
                elif pembelian_barang == kodeBarang_3:
                    jmlh_beli_brng_3 = int(input())
                    ttl_harga_3 = jmlh_beli_brng_3 * hargaBarang_3
                    input_ulang = str(
                        input("Apakah anda ingin menambah barang lagi?(y/n)"))
                    beli_3 = True
        else:
            total_semua_harga = ttl_harga_1 + ttl_harga_2 + ttl_harga_3
            harga_disk_khusus_1 = 0
            harga_disk_khusus_2 = 0
            harga_disk_khusus_3 = 0

            print(
                "\n=======================================\nNama Brg | Jml | Total Harga |")
            print(namaBarang_1, "|", jmlh_beli_brng_1, "|", ttl_harga_1, "|")
            if total_semua_harga < 1000000:
                if jmlh_beli_brng_1 > 10 and diskonBarang_1 > 0:
                    harga_disk_khusus_1 = float(
                        (diskonBarang_1/100) * ttl_harga_1)
                    print("Diskon item khusus | 1 |", -
                          abs(harga_disk_khusus_1), "|")
            if beli_2 == True:
                print(namaBarang_2, "|", jmlh_beli_brng_2,
                      "|", ttl_harga_2, "|")
                if total_semua_harga < 1000000:
                    if jmlh_beli_brng_2 > 10 and diskonBarang_2 > 0:
                        harga_disk_khusus_2 = float(
                            (diskonBarang_2/100) * ttl_harga_2)
                        print("Diskon item khusus | 1 |", -
                              abs(harga_disk_khusus_2), "|")
            if beli_3 == True:
                print(namaBarang_3, "|", jmlh_beli_brng_3,
                      "|", ttl_harga_3, "|")
                if total_semua_harga < 1000000:
                    if jmlh_beli_brng_3 > 10 and diskonBarang_3 > 0:
                        harga_disk_khusus_3 = float(
                            (diskonBarang_3/100) * ttl_harga_3)
                        print("Diskon item khusus | 1 |", -
                              abs(harga_disk_khusus_3), "|")
            ttl_harga_disk_khusus = float(
                harga_disk_khusus_1 + harga_disk_khusus_2 + harga_disk_khusus_3)
            if total_semua_harga < 1000000:
                print("=======================================")
                print("Total Pembelian       | ", total_semua_harga -
                      ttl_harga_disk_khusus, " |")
            if total_semua_harga >= 1000000:
                if total_semua_harga >= 100000:
                    diskon = float(0.05 * total_semua_harga)
                    total_semua_harga_diskon = float(
                        total_semua_harga - diskon)
                    print("=======================================")
                    print("Total Pembelian       | ", total_semua_harga, " |\nDiskon                | -",
                          diskon, " |\n=======================================")
                    print("Total Akhir           | ",
                          total_semua_harga_diskon, " |")
                else:
                    print("=======================================")
                    print("Total Pembelian       | ", total_semua_harga, " |")
    elif pembelian_barang == kodeBarang_2:
        jmlh_beli_brng_2 = int(input())
        ttl_harga_1 = 0
        ttl_harga_2 = jmlh_beli_brng_2 * hargaBarang_2
        ttl_harga_3 = 0
        jmlh_beli_brng_1 = 0
        jmlh_beli_brng_3 = 0
        beli_1 = False
        beli_2 = True
        beli_3 = False
        input_ulang = str(
            input("Apakah anda ingin menambah barang lagi?(y/n)"))
        while input_ulang == "y":
            pembelian_barang = str(input())
            while (pembelian_barang != kodeBarang_1) ^ (pembelian_barang != kodeBarang_2) ^ (pembelian_barang != kodeBarang_3):
                print("Mohon maaf, barang tidak ditemukan")
                pembelian_barang = str(input())
            else:
                if pembelian_barang == kodeBarang_1:
                    jmlh_beli_brng_1 = int(input())
                    ttl_harga_1 = jmlh_beli_brng_1 * hargaBarang_1
                    input_ulang = str(
                        input("Apakah anda ingin menambah barang lagi?(y/n)"))
                    beli_1 = True
                elif pembelian_barang == kodeBarang_3:
                    jmlh_beli_brng_3 = int(input())
                    ttl_harga_3 = jmlh_beli_brng_3 * hargaBarang_3
                    input_ulang = str(
                        input("Apakah anda ingin menambah barang lagi?(y/n)"))
                    beli_3 = True
        else:
            total_semua_harga = ttl_harga_1 + ttl_harga_2 + ttl_harga_3
            print(
                "\n=======================================\nNama Brg | Jml | Total Harga |")
            print(namaBarang_2, "|", jmlh_beli_brng_2, "|", ttl_harga_2, "|")
            if beli_1 == True:
                print(namaBarang_1, "|", jmlh_beli_brng_1,
                      "|", ttl_harga_1, "|")
            if beli_3 == True:
                print(namaBarang_3, "|", jmlh_beli_brng_3,
                      "|", ttl_harga_3, "|")

            if total_semua_harga >= 1000000:
                diskon = float(0.05 * total_semua_harga)
                total_semua_harga_diskon = float(total_semua_harga - diskon)
                print("=======================================")
                print("Total Pembelian       | ", total_semua_harga, " |\nDiskon                | -",
                      diskon, " |\n=======================================")
                print("Total Akhir           | ",
                      total_semua_harga_diskon, " |")
            elif total_semua_harga < 1000000:
                jenis_barang_terdiskon = 0
                harga_disk_khusus_1 = 0
                harga_disk_khusus_2 = 0
                harga_disk_khusus_3 = 0

                if (jmlh_beli_brng_1 > 10) or (jmlh_beli_brng_2 > 10) or (jmlh_beli_brng_3 > 10):
                    if jmlh_beli_brng_1 > 10:
                        if diskonBarang_1 > 0:
                            harga_disk_khusus_1 = float(
                                (diskonBarang_1/100) * ttl_harga_1)
                            jenis_barang_terdiskon += 1

                    if jmlh_beli_brng_2 > 10:
                        if diskonBarang_2 > 0:
                            harga_disk_khusus_2 = float(
                                (diskonBarang_2/100) * ttl_harga_2)
                            jenis_barang_terdiskon += 1

                    if jmlh_beli_brng_3 > 10:
                        if diskonBarang_3 > 0:
                            harga_disk_khusus_3 = float(
                                (diskonBarang_3/100) * ttl_harga_3)
                            jenis_barang_terdiskon += 1
                    ttl_harga_disk_khusus = float(
                        harga_disk_khusus_1 + harga_disk_khusus_2 + harga_disk_khusus_3)
                    print("Diskon item khusus |", jenis_barang_terdiskon, "|", -abs(
                        ttl_harga_disk_khusus), "|\n=======================================")
                    print("Total Pembelian       | ",
                          total_semua_harga - ttl_harga_disk_khusus, " |")
                else:
                    print("=======================================")
                    print("Total Pembelian       | ", total_semua_harga, " |")
    elif pembelian_barang == kodeBarang_3:
        jmlh_beli_brng_3 = int(input())
        ttl_harga_1 = 0
        ttl_harga_2 = 0
        ttl_harga_3 = jmlh_beli_brng_3 * hargaBarang_3
        jmlh_beli_brng_1 = 0
        jmlh_beli_brng_2 = 0
        beli_1 = False
        beli_2 = False
        beli_3 = True
        input_ulang = str(
            input("Apakah anda ingin menambah barang lagi?(y/n)"))
        while input_ulang == "y":
            pembelian_barang = str(input())
            while (pembelian_barang != kodeBarang_1) ^ (pembelian_barang != kodeBarang_2) ^ (pembelian_barang != kodeBarang_3):
                print("Mohon maaf, barang tidak ditemukan")
                pembelian_barang = str(input())
            else:
                if pembelian_barang == kodeBarang_1:
                    jmlh_beli_brng_1 = int(input())
                    ttl_harga_1 = jmlh_beli_brng_1 * hargaBarang_1
                    input_ulang = str(
                        input("Apakah anda ingin menambah barang lagi?(y/n)"))
                    beli_1 = True
                elif pembelian_barang == kodeBarang_2:
                    jmlh_beli_brng_2 = int(input())
                    ttl_harga_2 = jmlh_beli_brng_2 * hargaBarang_2
                    input_ulang = str(
                        input("Apakah anda ingin menambah barang lagi?(y/n)"))
                    beli_2 = True
        else:
            total_semua_harga = ttl_harga_1 + ttl_harga_2 + ttl_harga_3
            print(
                "\n=======================================\nNama Brg | Jml | Total Harga |")
            print(namaBarang_3, "|", jmlh_beli_brng_3, "|", ttl_harga_3, "|")
            if beli_1 == True:
                print(namaBarang_1, "|", jmlh_beli_brng_1,
                      "|", ttl_harga_1, "|")
            if beli_2 == True:
                print(namaBarang_2, "|", jmlh_beli_brng_2,
                      "|", ttl_harga_2, "|")
            if total_semua_harga >= 1000000:
                diskon = float(0.05 * total_semua_harga)
                total_semua_harga_diskon = float(total_semua_harga - diskon)
                print("=======================================")
                print("Total Pembelian       | ", total_semua_harga, " |\nDiskon                | -",
                      diskon, " |\n=======================================")
                print("Total Akhir           | ",
                      total_semua_harga_diskon, " |")
            elif total_semua_harga < 1000000:
                jenis_barang_terdiskon = 0
                harga_disk_khusus_1 = 0
                harga_disk_khusus_2 = 0
                harga_disk_khusus_3 = 0
                if (jmlh_beli_brng_1 > 10) or (jmlh_beli_brng_2 > 10) or (jmlh_beli_brng_3 > 10):
                    if jmlh_beli_brng_1 > 10:
                        if diskonBarang_1 > 0:
                            harga_disk_khusus_1 = float(
                                (diskonBarang_1/100) * ttl_harga_1)
                            jenis_barang_terdiskon += 1

                    if jmlh_beli_brng_2 > 10:
                        if diskonBarang_2 > 0:
                            harga_disk_khusus_2 = float(
                                (diskonBarang_2/100) * ttl_harga_2)
                            jenis_barang_terdiskon += 1

                    if jmlh_beli_brng_3 > 10:
                        if diskonBarang_3 > 0:
                            harga_disk_khusus_3 = float(
                                (diskonBarang_3/100) * ttl_harga_3)
                            jenis_barang_terdiskon += 1
                    ttl_harga_disk_khusus = float(
                        harga_disk_khusus_1 + harga_disk_khusus_2 + harga_disk_khusus_3)
                    print("Diskon item khusus |", jenis_barang_terdiskon, "|", -abs(
                        ttl_harga_disk_khusus), "|\n=======================================")
                    print("Total Pembelian       | ",
                          total_semua_harga - ttl_harga_disk_khusus, " |")
                else:
                    print("=======================================")
                    print("Total Pembelian       | ", total_semua_harga, " |")

#Ini adalah batas akhir jawaban day-4 !!!!