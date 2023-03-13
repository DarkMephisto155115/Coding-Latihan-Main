max = 3
i = 1
counter = 2
login = False

while i <= max:
    try:
        print("\n===DASPRO LOGIN===\n")
        username = input("Username : ")
        password = input("Password : ")
        if (username == "1202220313"):
            if (len(password) > 8):
                if (password == "PPLIsFun2022"):
                    print("\nSuccessfully logged in!")
                    login = True
                    break
                else:
                    print("\nWrong password!")
            else:
                raise NameError
        else:
            if (password != "PPLIsFun2022"):
                print("\nWrong username and password!")
            else:
                print("\nWrong username!")
        print(f"\n{counter} more attempts left!")
        i += 1
        counter -= 1
    except NameError:
        print("\nPassword length should be more than 8 letter!")
if (counter < 1 and login == False):
    print("\nTrial runs out!")