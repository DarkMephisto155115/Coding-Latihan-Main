print(">>>>>* KATEGORI UMUR *<<<<<")
umur = int(input("Masukkan umur anda = "))
print("Anda berada pada :")
print("============================")
if umur > 65:
    print("Masa Manula")
elif umur > 45 and umur <= 65:
    print("Masa Lansia")
elif umur > 25 and umur <= 45:
    print("Masa Dewasa")
elif umur > 12 and umur <= 25:
    print("Masa Remaja")
elif umur > 5 and umur <= 12:
    print("Masa Kanak-kanak")
elif umur > 0 and umur <= 5:
    print("Masa Balita")
else:
    print("Umur Invalid")
print("============================")
berat = float(input("Masukkan berat badan (Kg) : "))
tinggi = float(input("Masukkan tinggi badan (M) : "))
nilai_bmi = berat/(tinggi*tinggi)
print("Nilai BMI adalah " + str(nilai_bmi))
if nilai_bmi > 40:
    print("Termasuk kategori Extremely Obese")
elif nilai_bmi <= 39.9 and nilai_bmi > 35:
    print("Termasuk kategori Very Obese")
elif nilai_bmi <= 34.9 and nilai_bmi > 30:
    print("Termasuk kategori Obese")
elif nilai_bmi <= 29.9 and nilai_bmi > 25:
    print("Termasuk kategori Overweight")
elif nilai_bmi <= 24.9 and nilai_bmi > 18.5:
    print("Termasuk kategori Normal")
elif nilai_bmi < 18.5:
    print("Termasuk kategori Underweight")
