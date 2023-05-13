import numpy as np
import matplotlib.pyplot as mp

tabel = np.array([
    [0, 282000, 3, 0], [1, 125000, 1, 0], [2, 374000, 2, 0], [3, 156000, 1, 0],
    [4, 174000, 2, 0], [5, 131000, 1, 0], [6, 178000, 3, 0], [7, 119000, 1, 0],
    [8, 117000, 1, 0], [9, 286000, 2, 0], [
        10, 335000, 2, 0], [11, 295000, 3, 0],
    [12, 194000, 3, 0], [13, 278000, 1, 0], [
        14, 316000, 2, 0], [15, 120000, 1, 0],
    [16, 171000, 2, 0], [17, 358000, 1, 0], [
        18, 183000, 1, 0], [19, 78000, 1, 0]
])
print("\nTransaksi : ")
print(tabel)
print("")

# Poin
for x in tabel:
    if x[1] >= 100000:
        hasilBagi = x[1] / 100000
        x[3] = hasilBagi

for y in tabel:
    if y[2] >= 3:
        y[3] = y[3] * 2

for x in range(0, 45):
    print("=", end="")
print("\n")

print("Data transaksi sudah dimasukan poin :")
print(tabel)
print("")

# tabel terurut
tabel = tabel[tabel[:, 1].argsort()][::-1]

no = -1

for x in range(len(tabel)):
    no += 1
    tabel[x][0] = no

for x in range(0, 45):
    print("=", end="")
print("\n")

print("Tabel transaksi tambahan poin untuk pembelian lebih dari 3 :")
print(tabel)
print("")

# rata, median, deviasi
rata_rata = np.mean(tabel[:, 1])
rata_rata_int = int(rata_rata)

median = np.median(tabel[:, 1])
median_int = int(median)

deviasi = np.std(tabel[:, 1])
deviasi_int = int(deviasi)

for x in range(0, 45):
    print("=", end="")
print("\n")

print("Rata-rata harga yang dibeli adalah : Rp {:,},-".format(rata_rata_int))
print("Median harga yang dibeli adalah : Rp {:,},-".format(median_int))
print(
    "Standar Deviasi harga yang dibeli adalah : Rp {:,},-".format(deviasi_int))

print("")
for x in range(0, 45):
    print("=", end="")
print("\n")


# Total profit
data_profit = []

for y in range(len(tabel)):
    profit_pertransaksi = (tabel[y][1])/2
    data_profit.append(profit_pertransaksi)
    print("profit transaksi ke-" + str(y) +
          ": Rp {:,},-".format(profit_pertransaksi))

total_profit = sum(data_profit)
print("\nTotal profit adalah : Rp {:,},-".format(total_profit))

print("")
for x in range(0, 45):
    print("=", end="")
print("\n")

# Rata-rata
rata_rata_dijual = np.mean(tabel[:, 2])
rata_int = int(rata_rata_dijual)

print(f"Rata-rata produk yang dibeli adalah :  {rata_int}\n")

for x in range(0, 45):
    print("=", end="")
print("\n")


poin_data = []
for x in range(len(tabel)):
    total_poin = tabel[x][2]
    poin_data.append(total_poin)

#  keuntungan bersih
total_poin = sum(poin_data)
poin_uang = total_poin * 5000
keuntungan_bersih = total_profit - poin_uang
print(f"Total poin dari semua transaksi : {total_poin}")
print("Total biaya yang dikeluarkan untuk",
      total_poin, "poin : Rp {:,},-".format(poin_uang))
print(
    "Total keuntungan bersih yang didapatkan adalah : Rp {:,},-".format(keuntungan_bersih))

print("")
for x in range(0, 45):
    print("=", end="")
print("\n")

# Data Visualisasi
x = [row[1] for row in tabel]
y = [row[2] for row in tabel]

mp.scatter(x, y)

mp.xlabel('Price')
mp.ylabel('Amount')
mp.title('Data Transaction of an Item')


mp.show()

# number = [1, 2, 3, 4, 5, 6, 7, 8, 9,

# fig, ax = mp.subplots(figsize = (6,6))

# mp.plot(tabel[0], tabel[1], marker = "o", markerfacecolor = "r", markersize = 5)


# len = range(len(tabel))
# mp.bar(len, tabel[1])
# mp.xticks(len, tabel[2])
# mp.title("Grafik Penjualan")
# mp.xlabel("a")
# mp.ylabel("b")

# mp.legend()
# mp.grid()
# mp.show()


# fig, ax = mp.subplots(figsize = (8,8))
# mp.plot(tabel[3], tabel[2], marker = "x", markerfacecolor = "black", markersize = "5", label = "Jumlah Barang")
# mp.plot(tabel[3], tabel[1], marker = "o", markerfacecolor = "yellow", markersize = "5", label = "poin")

# mp.xticks(tabel[3])
# mp.xlabel("Nominal")
# mp.ylabel("")

# mp.legend()
# mp.title("Grafik Penjualan")
# mp.grid()
#  mp.show()
