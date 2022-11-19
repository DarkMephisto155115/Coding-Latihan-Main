max = 3
i = 1
counter = 2
while i <= max:
    username = input("Masukkan username anda: ")
    password = input("Masukkan password anda: ")
    if username == "Daspro" and password == "PPL4s!k":
        print("Selamat, Anda berhasil login!")
    else:
        if counter == 0:
            print("Coba lagi besok")

        else:
            print(f"Login gagal, percobaan tersisa {counter} kali")
    i += 1
    counter -= 1
