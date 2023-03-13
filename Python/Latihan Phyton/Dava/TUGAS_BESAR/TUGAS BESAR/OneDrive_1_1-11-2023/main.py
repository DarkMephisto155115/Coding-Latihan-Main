import pages

def main():
    login()

# only admin can perform operation in this application 
def login():
    pages.login_screen()
    
if __name__ == "__main__":
    main()