import numpy as np

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
    [19, 78000, 1, 0]
]

for t in transactions:
    points = t[2] * t[1] // 100000
    bonus_points = 0
    if t[2] >= 3:
        bonus_points = t[1] // 200
    total_points = points + bonus_points
    t[3] = total_points
    transactions.append(total_points)

    print("Transaction ID: ", t[0])
    print("Transaction Amount: ", t[1])
    print("Number of Items: ", t[2])
    print("Total Points: ", t[3])
    print("--------")

# Setelah tim marketing melakukan evaluasi, mereka melihat bahwa skema poin ini masih bisa ditingkatkan untuk menarik lebih banyak pembeli. Head of Marketing xyz.com kemudian memutuskan untuk memberikan ekstra insentif kepada pembeli sebanyak 2x poin (2 x poin dengan aturan sebelumnya) jika mereka membeli minimal 3 produk.
# Untuk itu, anda perlu memodifikasi script yang sudah anda tulis sebelumnya. Perhitungan poin kini tidak berdasar hanya dari nilai transaksi, tetapi juga jumlah barang yang dibeli.
for row in transactions:
    pass
