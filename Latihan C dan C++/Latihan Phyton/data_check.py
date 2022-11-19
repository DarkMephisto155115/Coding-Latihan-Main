input_1 = input("Masukkan input: ")
input_2 = input("Masukkan input: ")
if (input_2.isnumeric() == False):
    print(input_2)
else:
    tambah = int(input_2)
    cek = ord(input_1[0])
    cek += tambah
    input_1 = chr(cek)
    print(input_1)
