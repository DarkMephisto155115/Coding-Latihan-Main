j = 0
list_namaBarang = ["Sayuran", "Bumbu Masak", "Sabun dan pembersih rumah",
                   "Aneka minuman", "Buah-buahan", "Obat-obatan", "Aneka Jajanan"]
list_Harga = [127800, 103500, 77350, 87780, 48600, 64678, 80450]
total = 0
for i in list_Harga:
    total += i
print("====================================================")
print("|No \tNama Barang \t\t\tHarga      |")
print("====================================================")
while (j < 7):
    if (j == 0):
        print(str(j) + "\t" +
              list_namaBarang[j] + "\t\t\t\t" + "Rp. " + str(list_Harga[j]))
    elif (j == 2):
        print(str(j) + "\t" +
              list_namaBarang[j] + "\t" + "Rp. " + str(list_Harga[j]))
    else:
        print(str(j) + "\t" +
              list_namaBarang[j] + "\t\t\t" + "Rp. " + str(list_Harga[j]))

    j += 1
print("====================================================")
print("|\t\t\tTotal\t:\t" + "Rp. "+str(total)+" |")
print("====================================================")
