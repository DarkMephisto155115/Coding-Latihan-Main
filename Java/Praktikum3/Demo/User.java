package Java.Praktikum3.Demo;

import java.util.Scanner;

public class User {
    Scanner sc = new Scanner(System.in);
    private boolean admin;
    private int userIndex;
    public Object[][] userDB = { { "admin", "admin", 0, true }, { "tes", "tes", 1, true },
            { "123", "123", 1, false } };
    private String username;
    private String password;
    private int pilihan;

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
    public Object getUserDB(int i, int j) {
        return userDB[i][j];
    }

    public void setUserDB(Object userDB, int i, int j) {
        this.userDB[i][j] = userDB;
    }

    public void setPilihan(int pilihan) {
        this.pilihan = pilihan;
    }

    public int getPilihan() {
        return pilihan;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    // Feature / Method
    public void login() {
        System.out.print("Masukkan username : ");
        setUsername(sc.next());
        System.out.print("Masukkan password : ");
        setPassword(sc.next());
        for (int i = 0; i < userDB.length; i++) {
            setUserIndex(i);
            if (getUsername().equals(getUserDB(getUserIndex(), 0))
                    && getPassword().equals(getUserDB(getUserIndex(), 1))) {
                if ((int) getUserDB(getUserIndex(), 2) == 0) {
                    setAdmin(true);
                } else {
                    setAdmin(false);
                }
                dashboard();
                break;
            } else if (getUsername().equals(getUserDB(getUserIndex(), 0))
                    && getPassword().equals(getUserDB(getUserIndex(), 1)) == false) {
                System.out.println("\nPassword Salah!!!\n");
                login();
                break;
            } else if (getUserIndex() >= userDB.length - 1) {
                System.out.println("\nPassword dan Username Salah!!!\n");
                login();
                break;
            }
        }

    }

    public void dashboard() {
        if (isAdmin()) {
            System.out.println("Sistem akademik UMM | Admin");
            System.out.println("Username : " + getUsername());
            System.out.println("Status Mahasiswa : " + getUserDB(getUserIndex(), 3));
            System.out.println("1. Update Status Mahasiswa");
            System.out.println("2. Update Password Mahasiswa");
            System.out.println("0. Logout");
            System.out.print("Pilih menu : ");
            setPilihan(sc.nextInt());
            switch (getPilihan()) {
                case 1:
                    updateStatus();
                    break;
                case 2:
                    updatePassword();
                    break;
                case 0:
                    login();
                    break;

                default:
                    System.out.println("Input Salah!!!");
                    dashboard();
                    break;
            }
        } else {
            System.out.println("Sistem akademik UMM | Mahasiswa");
            System.out.println("Username : " + getUsername());
            System.out.println("Status Mahasiswa : " + getUserDB(getUserIndex(), 3));
            System.out.println("1. Update Password");
            System.out.println("0. Logout");
            System.out.print("Pilih menu : ");
            setPilihan(sc.nextInt());
            switch (getPilihan()) {
                case 1:
                    updatePassword();
                    break;
                case 0:
                    login();
                    break;

                default:
                    System.out.println("Input Salah!!!");
                    dashboard();
                    break;
            }
        }
    }

    public void updateStatus() {
        if (isAdmin()) {
            System.out.print("Masukkan Username : ");
            setUsername(sc.next());
            for (int i = 0; i < userDB.length; i++) {
                if (getUsername().equals(getUserDB(i, 0))) {
                    System.out.println("Ganti Status Mahasiswa : ");
                    System.out.println("1. Aktif");
                    System.out.println("2. Tidak Aktif");
                    System.out.print("Pilih menu : ");
                    setPilihan(sc.nextInt());
                    switch (pilihan) {
                        case 1:
                            setUserDB(true, i, 3);
                            dashboard();
                            break;
                        case 2:
                            setUserDB(false, i, 3);
                            dashboard();
                            break;
                        default:
                            System.out.println("Input Salah!!!");
                            dashboard();
                            break;
                    }
                } else if (i >= userDB.length - 1) {
                    System.out.println("\nUsername Tidak Ditemukan!!!\n");
                    dashboard();
                    break;
                }
            }
        }
    }

    public void updatePassword() {
        if (isAdmin()) {
            System.out.print("Masukkan Username : ");
            setUsername(sc.next());
            for (int i = 0; i < userDB.length; i++) {
                if (getUsername().equals(getUserDB(i, 0))) {
                    System.out.print("Input Password Baru : ");
                    setPassword(sc.next());
                    if (isPassPasswordCheck(getPassword())) {
                        setUserDB((Object) getPassword(), i, 1);
                        dashboard();
                    } else {
                        dashboard();
                    }
                } else if (i >= userDB.length - 1) {
                    System.out.println("\nUsername Tidak Ditemukan!!!\n");
                    dashboard();
                    break;
                }
            }
        } else {
            System.out.print("Input Password Baru : ");
            setPassword(sc.next());
            if (isPassPasswordCheck(getPassword())) {
                setUserDB((Object) getPassword(), getUserIndex(), 1);
                dashboard();
            } else {
                dashboard();
            }
        }
    }

    // Checker
    public boolean isPassPasswordCheck(String Pass) {
        if (isPassDigit(Pass) && isPassUpperCase(Pass) && isPassLowerCase(Pass) && isPassSymbols(Pass)) {
            return true;
        } else {
            System.out.println("");
            if (!isPassUpperCase(Pass)) {
                System.out.println("Password Harus Memiliki Huruf Besar!!!");
            }
            if (!isPassLowerCase(Pass)) {
                System.out.println("Password Harus Memiliki Huruf Kecil!!!");
            }
            if (!isPassDigit(Pass)) {
                System.out.println("Password Harus Memiliki Angka!!!");
            }
            if (!isPassSymbols(Pass)) {
                System.out.println("Password Harus Memiliki Simbol!!!");
            }

            System.out.println("");
            return false;
        }

    }

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
        return admin;
    }

    // Main
    public static void main(String[] args) {
        User user = new User();
        user.login();
    }
}
