jurusan = input("Anda berasal dari jurusan apa ? (IPA/IPS)\n")

if jurusan == "IPA":
    print("Fakultas yang berasal dari jurusan IPA: ")
    print("1. Fakultas Rekayasa Industri")
    print("2. Fakultas Informatika")
    print("3. Fakultas Ilmu Terapan")
    print("4. Fakultas Teknik Elektro")
elif jurusan == "IPS":
    print("Fakultas yang berasal dari jurusan IPS: ")
    print("1. Fakultas Komunikasi dan Bisnis")
    print("2. Fakultas Ekonomi dan Bisnis")
    print("3. Fakultas Industri Kreatif")
else:
    print("Pilih jurusan yang ada diatas!!!")
