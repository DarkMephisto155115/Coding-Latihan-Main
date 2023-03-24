import operator
items = [["Beras", "10 kg", 9750],
         ["Daging Sapi", "3 kg", 100750],
         ["Daging Ayam", "5 kg", 75800],
         ["Daging Kambing", "2 kg", 80400],
         ["Bumbu Dapur Siap Saji", "6 buah", 11500],
         ["Aneka Sayur", "14 macam", 9250],
         ["Aneka Buah", "11 macam", 12500],
         ["Aneka Minuman", "30 buah", 7750],
         ["Aneka Cincau", "3 macam", 14230],
         ]

items2 = [["Beras", 10, 9750],
          ["Daging Sapi", 3, 100750],
          ["Daging Ayam", 5, 75800],
          ["Daging Kambing", 2, 80400],
          ["Bumbu Dapur Siap Saji", 6, 11500],
          ["Aneka Sayur", 14, 9250],
          ["Aneka Buah", 11, 12500],
          ["Aneka Minuman", 30, 7750],
          ["Aneka Cincau", 3, 14230],
          ]
item_names = ["Beras", "Daging Sapi", "Daging Ayam", "Daging Kambing", "Bumbu Dapur Siap Saji",
              "Aneka Sayur", "Aneka Buah", "Aneka Minuman", "Aneka Cincau"]

item_banyak = [10, 3, 5, 2, 6, 14, 11, 30, 3]

totalHarga = 0


def turu():
    quit()


def display_items(items):
    print('-' * 72)
    print("{:<25} {:<14} {:<15} {:<15} ".format(
        "Nama", "Jumlah", "Harga/Kg", "Total"))
    print('-' * 72)

    total_harga = 0
    for item in items:
        nama, jumlah, harga = item
        total = float(jumlah.split()[0]) * harga
        total_harga += total

        print("{:<25} {:<14} {:<15,.0f} {:<15,.0f}".format(
            nama, jumlah, harga, total))
    global totalHarga
    totalHarga = total_harga
    print('-' * 72)
    print("Total Harga:{:>54,.0f}".format(total_harga))
    print('-' * 72)


def display_items2(items):
    print('-' * 72)
    print("{:<25} {:<14} {:<15} {:<15} ".format(
        "Nama", "Jumlah", "Harga/Kg", "Total"))
    print('-' * 72)

    total_harga = 0
    for item in items:
        nama, jumlah, harga = item
        total = float(jumlah) * harga
        total_harga += total

        print("{:<25} {:<14} {:<15,.0f} {:<15,.0f}".format(
            nama, jumlah, harga, total))
    global totalHarga
    totalHarga = total_harga
    print('-' * 72)
    print("Total Harga:{:>54,.0f}".format(total_harga))
    print('-' * 72)


display_items(items)

for i in range(2):
    print("\nMasukan data makanan yang ingin dimasukan")
    namaMakanan = input("Nama Makanan : ")
    jumlahMakanan = input("Jumlah Makanan : ")
    hargaMakanan = int(input("Harga Satuan : "))
    items.append([namaMakanan, jumlahMakanan, hargaMakanan])
    items2.append([namaMakanan, int(jumlahMakanan.split()[0]), hargaMakanan])
    item_names.append(namaMakanan)
    item_banyak.append(int(jumlahMakanan.split()[0]))

display_items(items)

print("")
for i, val in enumerate(item_names, 1):
    print('{}. {}'.format(i, val))

dataHapusMakanan = int(
    input("Masukan nama makanan yang ingin dihapus (masukan angka saja): "))
items.pop(dataHapusMakanan - 1)
item_banyak.pop(dataHapusMakanan - 1)
items2.pop(dataHapusMakanan - 1)
display_items(items)

print("\nSetelah mengurangi jumlah sayur menjadi 10 macam")
items[5][1] = "10 macam"
item_banyak[5] = 10
display_items(items)


print("\nList belanjaan setelah diurutkan dari yang mahal ke yang termurah")
items.sort(key=lambda item: item[2], reverse=True)
display_items(items)

print("\nList belanjaan setelah diurutkan dari yang banyak ke sedikit")
sortedlist = sorted(items2, key=lambda item: item[1], reverse=True)
display_items2(sortedlist)


def bayar_go_pay():

    global banyakSaldo
    global topUpMinimal
    global totalHarga
    banyakSaldo = 0
    topUpMinimal = totalHarga

    diskon = (int(-((banyakSaldo) - topUpMinimal))) * 20 / 100
    diskonFormat = "{:,}". format(diskon)

    while topUpMinimal > 0:
        topUpFormat = "{:,}".format(topUpMinimal)
        print("\nSaldo tidak cukup!!!")
        print("Anda harus top up sebesar Rp", topUpFormat)
        topUp = int(input("\nmasukan nominal untuk top-up : Rp "))
        banyakSaldo = banyakSaldo + topUp
        topUpMinimal = topUpMinimal - banyakSaldo
        hargaSetelahDiskon = totalHarga - (diskon)
        hargaSetelahDiskonFormat = "{:,}".format(hargaSetelahDiskon)
        if topUpMinimal <= 0:
            saldoTersisa = int(banyakSaldo) - int(hargaSetelahDiskon)
            saldoTersisaFormat = "{:,}". format(saldoTersisa)
            print("")
            print("-"*45)
            print("Anda berhasil membayar menggunakan Go-Pay")
            print("Anda mendapatkan diskon sebesar 20%\n")
            print("Diskon : "+diskonFormat)
            print("Total belanjaan anda menjadi Rp", hargaSetelahDiskonFormat)
            print("saldo anda tersisa Rp", saldoTersisaFormat)
            print("-"*45)

            break


pilihan = input("Apakah anda ingin membayar menggunakan Go-Pay? (y/n) : ")
if pilihan == "n":
    print("\nAnda tidak mendapatkan diskon 20%")
    print("Total belanja anda adalah Rp " + str(totalHarga))
    turu()
elif pilihan == "y":
    bayar_go_pay()


def saldoGopay(saldo):
    saldo = "{:,}".format(banyakSaldo)
    print("saldo anda sebesar Rp", saldo)
    print("saldo anda tidak cukup")


if topUpMinimal > 0:
    saldoGopay(banyakSaldo)
