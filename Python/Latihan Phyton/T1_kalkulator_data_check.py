print("===DIVIDING CALCULATOR===")
input_1 = input("Masukkan Angka: ")
input_2 = input("Masukkan Pembagi: ")
try:
    hasil = int(input_1)/int(input_2)
    if (hasil.is_integer() == True):
        print(f"Hasil nya adalah {int(hasil)}")
    else:
        print(f"Hasil nya adalah {hasil}")
except ValueError:
    print("\nInput yang dimasukkan harus integer!!!")
except ZeroDivisionError:
    print("\nTidak bisa dibagi dengan 0 !!!")
