print("----PROGRAM KONVERSI HARI----")

hari = ["Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu", ]

try:
    inputHari = int(input("Hari ke : "))
    print("Hari ke", inputHari, "adalah hari :", hari[inputHari-1])
except IndexError:
    print("Input Salah!!!")
