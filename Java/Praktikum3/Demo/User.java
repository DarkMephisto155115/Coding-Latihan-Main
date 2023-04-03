package Java.Praktikum3.Demo;

import java.util.Scanner;

public class User {
    Scanner sc = new Scanner(System.in);
    private boolean admin;
    private int userIndex;
    private User[][] userDB = { new User("admin", "admin", 0, true), new User("2021110370311147", "UMM_a2021", 1, true),
            new User("2021110370311145", "UMM_a2021", 1, false) };

    private String username;
    private String password;
    private int userRole;
    private boolean userStatus;

    public User(String username, String password, int userRole, boolean userStatus) {
        this.username = username;
        this.password = password;
        this.userRole = userRole;
        this.userStatus = userStatus;
    }

    public String getUsername() {
        return username;
    }

    public String getPassword() {
        return password;
    }

    public int getUserRole() {
        return userRole;
    }

    public boolean getUserStatus() {
        return userStatus;
    }

    // Setter Getter
    // Admin
    public void setAdmin(boolean admin) {
        this.admin = admin;
    }

    // User index
    public void setUserIndex(int userIndex) {
        this.userIndex = userIndex;
    }

    public int getUserIndex() {
        return userIndex;
    }

    // UserDB
    public Object[][] getUserDB() {
        return userDB;
    }

    public void setUserDB(Object[][] userDB) {
        this.userDB = userDB;
    }

    // Feature
    public void login() {
        String usrName = "";
        String pass = "";
        System.out.print("Masukkan username : ");
        usrName = sc.nextLine();
        System.out.print("Masukkan password : ");
        pass = sc.nextLine();
        for (int i = 0; i < userDB.length; i++) {
            if (userDB[i][0].equals(usrName) && userDB[i][1].equals(pass)) {

            }

        }

    }

    public void dashboard() {

    }

    public void updateStatus() {

    }

    public void updatePassword() {

    }

    // Checker
    public boolean isPassSymbols(String Pass) {
        boolean isValid = false;
        if (Pass.matches(".*[^a-zA-Z0-9 ].*")) {
            // Enek simbol
            isValid = true;
        }
        return isValid;
    }

    public boolean isPassDigit(String Pass) {
        boolean isValid = false;
        if (Pass.matches(".*\\d.*")) {
            // Enek nomere
            isValid = true;
        }
        return isValid;
    }

    public boolean isPassUpperCase(String Pass) {
        boolean isValid = false;
        if (Pass.matches(".*[A-Z].*")) {
            // Enek Uppercase e
            isValid = true;
        }
        return isValid;
    }

    public boolean isPassLowerCase(String Pass) {
        boolean isValid = false;
        if (Pass.matches(".*[a-z].*")) {
            // Enek Lowercase e
            isValid = true;
        }
        return isValid;
    }

    public boolean isAdmin() {
        boolean isValid = false;
        if (this.admin = true) {
            isValid = true;
        }
        return isValid;
    }
}
