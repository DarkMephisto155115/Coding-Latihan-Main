import numpy as np
import matplotlib.pyplot as mp

transactions = np.array([
    [0, 282000, 3, 0], [1, 125000, 1, 0], [2, 374000, 2, 0], [3, 156000, 1, 0],
    [4, 174000, 2, 0], [5, 131000, 1, 0], [6, 178000, 3, 0], [7, 119000, 1, 0],
    [8, 117000, 1, 0], [9, 286000, 2, 0], [
        10, 335000, 2, 0], [11, 295000, 3, 0],
    [12, 194000, 3, 0], [13, 278000, 1, 0], [
        14, 316000, 2, 0], [15, 120000, 1, 0],
    [16, 171000, 2, 0], [17, 358000, 1, 0], [
        18, 183000, 1, 0], [19, 78000, 1, 0]
])


def display(string):
    print(string)


def display_sekat():
    print("")
    for i in range(0, 45):
        print("-", end="")
    print("\n")


display("\nData transaksi awal : ")
display(transactions)

# Kalkulasi Point
for t in transactions:
    if t[1] >= 100000:
        t[3] = t[1] / 100000

for row in transactions:
    if row[2] >= 3:
        row[3] = row[3] * 2

display_sekat()

display("Data transaksi yang sudah dimasukan point :")
display(transactions)

# Urutkan tabel transaksi

counter = 0

for t in range(len(transactions)):
    transactions[t][0] = counter
    counter += 1

display_sekat()

display("Tabel transaksi tambahan point untuk pembelian barang yang lebih dari 3 :")
display(transactions)

# rata-rata, median, dan standar deviasi dari seluruh nilai transaksi
rataRata = int(np.mean(transactions[:, 1]))

median = int(np.median(transactions[:, 1]))

deviasi = int(np.std(transactions[:, 1]))


display_sekat()

display(
    "Rata-rata harga dari seluruh nilai transaksi : Rp {:,},-".format(rataRata))
display(
    "Median harga dari seluruh nilai transaksi : Rp {:,},-".format(median))
display(
    "Standar Deviasi harga dari seluruh nilai transaksi : Rp {:,},-".format(deviasi))


display_sekat()


# Total profit
profitArr = []

for t in range(len(transactions)):
    profitArr.append(((transactions[t][1])/2))
    display("Profit transaksi ke-" + str(t) +
            ": Rp {:,},-".format(((transactions[t][1])/2)))

totalProfit = sum(profitArr)
display("\nTotal profit yang didapatkan : Rp {:,},-".format(totalProfit))


display_sekat()


# Rata-rata jumlah produk yang dibeli per-transaksi
rataRataBarang = int(np.mean(transactions[:, 2]))

display(f"Rata-rata produk yang dibeli :  {rataRataBarang}\n")

display_sekat()

pointArr = []
for p in range(len(transactions)):
    pointArr.append(transactions[p][2])

#  Total keuntungan bersih
pointTotal = sum(pointArr)
point = pointTotal * 5000
keuntunganBersih = totalProfit - point
display(f"Total poin yang didapatkan dari semua transaksi : {pointTotal}")
print("Total biaya yang dikeluarkan untuk",
      pointTotal, "point : Rp {:,},-".format(point))
print(
    "Total keuntungan bersih yang didapatkan : Rp {:,},-".format(keuntunganBersih))


display_sekat()

# Visualisasi dari data transaksi
dataKeuntungan = []
dataNilai = []
dataTransaksi = []
for i in transactions:
    profit = i[1] * 0.5
    dataKeuntungan.append(profit)
    dataNilai.append(i[1])
    dataTransaksi.append(i[0])

mp.figure(figsize=(10, 5))

mp.title("Jumlah Transaksi dan Keuntungan")

mp.bar(dataTransaksi, dataNilai, align='edge',
       width=0.4, color='blue', label='Jumlah Transaksi')
mp.bar(dataTransaksi, dataKeuntungan,
       width=0.4, color='red', label='Keuntungan')

mp.xlabel("Orang ke")
mp.xticks(range(0, 20, 1))
mp.ylabel("Rupiah")
mp.yticks(range(0, 450000, 50000))

mp.legend()
mp.show()
