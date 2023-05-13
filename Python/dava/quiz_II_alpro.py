import numpy as np
from prettytable import PrettyTable
import matplotlib.pyplot as plt

transactions = [
    [0, 282000, 3, 0],
    [1, 125000, 1, 0],
    [2, 374000, 2, 0],
    [3, 156000, 1, 0],
    [4, 174000, 2, 0],
    [5, 131000, 1, 0],
    [6, 178000, 3, 0],
    [7, 119000, 1, 0],
    [8, 117000, 1, 0],
    [9, 286000, 2, 0],
    [10, 335000, 2, 0],
    [11, 295000, 3, 0],
    [12, 194000, 3, 0],
    [13, 278000, 1, 0],
    [14, 316000, 2, 0],
    [15, 120000, 1, 0],
    [16, 171000, 2, 0],
    [17, 358000, 1, 0],
    [18, 183000, 1, 0],
    [19, 78000, 1, 0]]

for t in transactions:
    if t[1] >= 100000:
        t[3] = t[1] // 100000

transaksis = PrettyTable()
transaksis.field_names = ["ID transaksi", "nilai", "jumlah_barang", "poin"]
print("Data poin")
for i in transactions:
    value = [i[0], i[1], i[2], i[3]]
    transaksis.add_row(value)
print(f"{transaksis}\n")

for row in transactions:
    if row[2] >= 3:
        row[3] *= 2

table_transaksi = PrettyTable()
table_transaksi.field_names = [
    "ID transaksi", "nilai", "jumlah_barang", "poin"]
print("Data setelah poin dihitung dan dikali 2")
for i in transactions:
    value = [i[0], i[1], i[2], i[3]]
    table_transaksi.add_row(value)
print(f"{table_transaksi}\n")


def data_analisis():
    data = sorted(transactions, key=lambda x: x[1], reverse=True)
    table = PrettyTable()
    table.field_names = ["ID transaksi", "nilai", "jumlah_barang", "poin"]
    print("==== nilai tertinggi ke terendah ====")
    for i in data:
        value = [i[0], i[1], i[2], i[3]]
        table.add_row(value)
    print(table)

    transaksi = []
    for i in transactions:
        transaksi.append(i[1])
    print(f"nilai rata-rata transaksi : {np.mean(transaksi)}")
    print(f"nilai median transaksi    : {np.median(transaksi)}")
    print(f"nilai standar deviasi     : {np.std(transaksi)}\n")

    print("==== Keuntungan Per Transaksi ====")
    data_keuntungan = []
    total_keuntungan = 0
    tables = PrettyTable()
    tables.field_names = ["ID transaksi", "nilai",
                          "jumlah_barang", "poin", "keuntungan"]
    for i in transactions:
        profit = i[1] * 0.5
        data_keuntungan.append(profit)
        total_keuntungan += profit
        value = [i[0], i[1], i[2], i[3], profit]
        tables.add_row(value)
    print(tables)
    print(f"total keuntungan dari setiap transaksi : {total_keuntungan}\n")

    print("==== Rata-rata ====")
    jumlah_barang = []
    for t in transactions:
        jumlah_barang.append(t[2])
    print(f"total rata-rata jumlah produk : {np.mean(jumlah_barang)}\n")

    total_akumulasi = 0
    akumulasi_poin = PrettyTable()
    akumulasi_poin.field_names = [
        "ID transaksi", "nilai", "jumlah_barang", "poin", "poin akumulasi"]
    for j in transactions:
        if j[3] >= 0:
            total = j[3] * 5000
            total_akumulasi += total
            value = [j[0], j[1], j[2], j[3], total]
            akumulasi_poin.add_row(value)
    print(akumulasi_poin)
    print(f"total nilai : {total_akumulasi}")
    print(f"keuntungan bersih : {total_keuntungan - total_akumulasi}")

    # visualisasi data
    plt.figure(figsize=(10, 5))

    plt.title("Data Transaksi")

    data_nilai = []
    data_transaksi = []
    for i in transactions:
        data_nilai.append(i[1])
        data_transaksi.append(i[0])
    plt.bar(data_transaksi, data_nilai, align='edge',
            width=0.4, color='blue', label='nilai')
    plt.bar(data_transaksi, data_keuntungan,
            width=0.4, color='red', label='keuntungan')

    plt.xlabel("data")
    plt.xticks(range(0, 20, 1))
    plt.ylabel("nilai")
    plt.yticks(range(0, 450000, 50000))

    plt.legend()
    plt.show()


data_analisis()
