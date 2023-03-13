max = 3
i = 1
counter = 2
while i <= max:
    print("===DASPRO LOGIN===\n")
    username = input("Masukkan username anda: ")
    password = input("Masukkan password anda: \n")
    if (username == "Daspro" and password == "PPL4s!k"):
        print("Selamat, Anda berhasil login!")
        break
    else:
        if counter == 0:
            print("Coba lagi besok")

        else:
            print(f"Login gagal, percobaan tersisa {counter} kali")
    i += 1
    counter -= 1
