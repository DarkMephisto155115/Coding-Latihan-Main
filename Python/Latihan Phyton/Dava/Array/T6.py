import numpy as np

list = np.array([["Daging ayam", 5, "Rp 43.250"], ["Daging sapi", 3, "Rp 84.750"], ["Daging kambing", 2, "Rp 73.800"],
                ["Bumbu dapur siap saji", 3, "Rp 7.500"], [
                    "Aneka sayur", 15, "Rp 8.250"], ["Aneka buah", 9, "Rp 11.500"],
                ["Aneka minuman", 5, "Rp 7.750"]])
listBelanjaan = [
    {"nama": "Daging Ayam", "jumlah": 5, "harga": 43250},
    {"nama": "Daging Sapi", "jumlah": 3, "harga": 84750},
    {"nama": "Bumbu dapur siap saji", "jumlah": 3, "harga": 7500},
    {"nama": "Aneka Sayur", "jumlah": 10, "harga": 8250},
    {"nama": "Aneka Buah", "jumlah": 9, "harga": 11500},
    {"nama": "Aneka Minuman", "jumlah": 5, "harga": 7750}
]

banyakBelanjaan = np.array([5, 3, 2, 3, 15, 9, 5])
hargaBelanjaan = np.array([43250, 84750, 73800, 7500, 8250, 11500, 7750])

print("A. Daftar belanjaan")
print(list)
print("\nTotal belanjaan bu rudi sebesar Rp",
      banyakBelanjaan.dot(hargaBelanjaan))

list = np.append(list, [["Aneka jajanan", 8, "Rp 6.500"], [
                 "Aneka obat-obatan", 5, "Rp 5.500"]], axis=0)
banyakBelanjaan = np.append(banyakBelanjaan, [8, 5], axis=0)
hargaBelanjaan = np.append(hargaBelanjaan, [6500, 5500], axis=0)

print("\nB. Daftar belanjaan setelah menambahkaan belanjaan\n", list)
print("\nTotal belanjaan bu rudi sebesar Rp",
      banyakBelanjaan.dot(hargaBelanjaan))


list[4, 1] = 10
list = np.delete(list, 2, axis=0)

print("\nC. Setelah membatalkan Daging Kambing dan mengurangi jumlah sayur menjadi 10 macam")
print(list)

banyakBelanjaan[4] = 10
banyakBelanjaan = np.delete(banyakBelanjaan, 2)
hargaBelanjaan = np.delete(hargaBelanjaan, 2)
print("\nTotal belanjaan bu rudi sebesar Rp",
      banyakBelanjaan.dot(hargaBelanjaan))


listBelanjaanMahalKeMurah = sorted(
    listBelanjaan, key=lambda x: x["harga"], reverse=True)
listBelanjaanBanyakKeSedikit = sorted(
    listBelanjaan, key=lambda x: x["jumlah"], reverse=True)

print("\nD. Bu Rudi ingin mengurutkan belanjaan dari yang mahal hingga yang murah\n")
i = 0
for item in listBelanjaanMahalKeMurah:
    if (i == 0):
        print(
            f"[['{item['nama']}' '{item['jumlah']}' '{item['harga']}']")
    elif (i == 5):
        print(
            f"['{item['nama']}' '{item['jumlah']}' '{item['harga']}']]")
    else:
        print(
            f"['{item['nama']}' '{item['jumlah']}' '{item['harga']}']")
    i = i+1


print("\nE. Bu Rudi ingin mengurutkan belanjaan dari yang terbanyak\n")
i = 0
for item in listBelanjaanBanyakKeSedikit:
    if (i == 0):
        print(
            f"[['{item['nama']}' '{item['jumlah']}' '{item['harga']}']")
    elif (i == 5):
        print(
            f"['{item['nama']}' '{item['jumlah']}' '{item['harga']}']]")
    else:
        print(
            f"['{item['nama']}' '{item['jumlah']}' '{item['harga']}']")
    i = i+1
