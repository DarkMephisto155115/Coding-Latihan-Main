counter = 2
login = False
max = 3
i = 1
while i <= max:
    print("\n===Sistem Akademik Kampus ( SIAK ) LOGIN===\n")
    username = input("Masukkan username : ")
    password = input("Masukkan password : ")
    if (username == "telkom"):
        if (password == "kampusterbaik"):
            print("\nWelcome, Bos!!! Selamat, Anda berhasil login!!!")
            login = True
            break
        else:
            print("\nPassword Salah")
    else:
        if (password != "kampusterbaik"):
            print("\nUsername dan Password Salah!!!")
        else:
            print("\nUsername Salah!!!")
    print("\nPercobaan tersisa " + str(counter) + " kali!!!")
    i += 1
    counter -= 1
if (counter < 1 and login == False):
    print("\nPercobaan Habis!!!\n")
    print("Harap reset ke Admin Kampus")

# i have no idea what the fuck im doing, pls send help.
