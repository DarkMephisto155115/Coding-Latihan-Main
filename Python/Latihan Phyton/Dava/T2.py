print("List Barang :")
print("1. Komputer Linivi")
print("2. Leptop Msu")
print("3. Hp Sumsam")

barang_dibeli = int(input("Anda ingin membeli apa ?\n"))

if barang_dibeli == 1:
    print("Barang yang anda pilih :")
    print("-> Komputer Linivi <-")
elif barang_dibeli == 2:
    print("Barang yang anda pilih :")
    print("-> Leptop Msu <-")
elif barang_dibeli == 3:
    print("Barang yang anda pilih :")
    print("-> Hp Sumsam <-")
else:
    print("Barang yang anda pilih tidak ditemukan!!!")
    exit()
check_out = input("Apakah anda yakin ingin checkout ? (y/n)\n")
if check_out == "y":
    print("Anda berhasil checkout")
elif check_out == "n":
    print("Anda tidak berhasil checkout")
else:
    print("Input salah!!!")
    exit()
print(">>> TERIMA KASIH <<<")
