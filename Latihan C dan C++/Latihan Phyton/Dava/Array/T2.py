stokBuah = []

print("---STOK BARANG---")
jumlahBuah = int(input("Masukkan jumlah barang : "))
for i in range(jumlahBuah):
    buah = input("Masukkan buah ke-" + str(i+1) + " : ")
    stokBuah.append(buah)

print("Stock buah : ", stokBuah)
