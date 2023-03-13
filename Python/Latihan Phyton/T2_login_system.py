max = 3
i = 1
counter = 2
login = False

while i <= max:
    try:
        print("\n===DASPRO LOGIN===\n")
        username = input("Masukkan username anda: ")
        password = input("Masukkan password anda: ")
        if (username == "tes"):
            if (len(password) > 8):
                if (password == "123456789"):
                    print("\nSelamat, Anda berhasil login!!!")
                    login = True
                    break
                else:
                    print("\nPassword Salah")
            else:
                raise NameError
        else:
            if (password != "123456789"):
                print("\nUsername dan Password Salah!!!")
            else:
                print("\nUsername Salah!!!")
        print(f"\nPercobaan tersisa {counter} kali!!!")
        i += 1
        counter -= 1
    except NameError:
        print("\nPassword harus lebih dari 8 input!!!")
if (counter < 1 and login == False):
    print("\nPercobaan Habis!!!")

# i have no idea what the fuck im doing, pls send help.
