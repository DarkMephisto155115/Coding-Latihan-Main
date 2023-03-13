belanjaan = [
    {"nama": "Daging Ayam", "jumlah": 5, "harga": 43250},
    {"nama": "Daging Sapi", "jumlah": 3, "harga": 84750},
    {"nama": "Bumbu dapur siap saji", "jumlah": 3, "harga": 7500},
    {"nama": "Aneka Sayur", "jumlah": 10, "harga": 8250},
    {"nama": "Aneka Buah", "jumlah": 9, "harga": 11500},
    {"nama": "Aneka Minuman", "jumlah": 5, "harga": 7750}
]
tambahan = [
    {"nama": "Aneka Jajanan", "jumlah": 8, "harga": 6500},
    {"nama": "Aneka Obat-obatan", "jumlah": 5, "harga": 5500}
]
total = 0
print("A. Daftar belanjaan:")
for item in belanjaan:
    subtotal = item["jumlah"] * item["harga"]
    total += subtotal
    print(
        f"{item['nama']} ({item['jumlah']} x {item['harga']}) = Rp. {subtotal:,}")
print(f"Total belanjaan = Rp. {total:,}")


belanjaan += tambahan
total = 0
print("B. Daftar belanjaan Setelah Ditambah:")
for item in belanjaan:
    subtotal = item["jumlah"] * item["harga"]
    total += subtotal
    print(
        f"{item['nama']} ({item['jumlah']} x {item['harga']}) = Rp. {subtotal:,}")
print(f"Total belanjaan = Rp. {total:,}")

print("C. Setelah Diskusi: ")
for item in belanjaan:
    if item["nama"] == "Daging Sapi":
        belanjaan.remove(item)
for item in belanjaan:
    if item["nama"] == "Aneka Sayur":
        belanjaan.remove(item)
for item in belanjaan:
    subtotal = item["jumlah"] * item["harga"]
    total += subtotal
    print(
        f"{item['nama']} ({item['jumlah']} x {item['harga']}) = Rp. {subtotal:,}")
print(f"Total belanjaan Setelah Diskusi = Rp. {total:,}")
belanjaan_mahal_ke_murah = sorted(
    belanjaan, key=lambda x: x["harga"], reverse=True)
belanjaan_banyak_ke_sedikit = sorted(
    belanjaan, key=lambda x: x["jumlah"], reverse=True)

print("D. Daftar Belanjaan Bu Rudi:")
for item in belanjaan_mahal_ke_murah:
    print(
        f"{item['nama']}: {item['jumlah']} x {item['harga']} = {item['jumlah'] * item['harga']}")

print("E. Daftar Belanjaan Bu Rudi:")
for item in belanjaan_banyak_ke_sedikit:
    print(
        f"{item['nama']}: {item['jumlah']} x {item['harga']} = {item['jumlah'] * item['harga']}")
