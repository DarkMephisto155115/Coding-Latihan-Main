berat = float(input("masukkan berat badan : "))
tinggi = float(input("masukkan tinggi (M) : "))
bmi = berat/(tinggi*tinggi)
if (bmi < 18.5):
    print("Berat badan kurang")
elif (bmi >= 18.5 and bmi <= 22.9):
    print("Berat badan normal")
elif (bmi >= 23 and bmi <= 29.9):
    print("Berat badan berlebih")
else:
    print("Berat badan obesitas")
print(bmi)
