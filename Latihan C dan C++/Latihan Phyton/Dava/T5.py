print("Bambang Yudhoyono")
print("SI-44-01")
print("1220011212")
alpro = input("Masukkan Indeks Alpro : ")
matvek = input("Masukkan Indeks Matvek : ")
kki = input("Masukkan Indeks KKI : ")
probstat = input("Masukkan Indeks Probstat : ")
prak_Alpro = input("Masukkan Indeks Praktikum Alpro : ")
per_org = input("Masukkan Indeks Perilaku Organisasi : ")
bindo = input("Masukkan Indeks B. Indonesia : ")
ppkn = input("Masukkan Indeks PPkn : ")


def indeks_converter(index):
    hasil = 0
    if index == "A":
        hasil = 4
    elif index == "B":
        hasil = 3
    elif index == "C":
        hasil = 2
    elif index == "D":
        hasil = 1
    elif index == "E":
        hasil = 0
    return hasil


nilai_alpro = indeks_converter(alpro)
nilai_matvek = indeks_converter(matvek)
nilai_kki = indeks_converter(kki)
nilai_probstat = indeks_converter(probstat)
nilai_prak_Alpro = indeks_converter(prak_Alpro)
nilai_per_org = indeks_converter(per_org)
nilai_bindo = indeks_converter(bindo)
nilai_ppkn = indeks_converter(ppkn)
hasil_IP = (nilai_alpro + nilai_matvek + nilai_kki +
            nilai_probstat + nilai_prak_Alpro + nilai_per_org+nilai_ppkn+nilai_bindo)/8
hasil_IP = float(hasil_IP)
print("IPS anda semester ini : " + str(hasil_IP))
if hasil_IP >= 3.5:
    print("Siap menjadi mahasiswa berprestasi")
elif hasil_IP >= 3 and hasil_IP <= 3.5:
    print("Tingkatkan lagi belajar nya")
elif hasil_IP >= 2 and hasil_IP <= 2.9:
    print("Jangan banyak main")
elif hasil_IP < 2:
    print("Jangan banyak rebahan")
