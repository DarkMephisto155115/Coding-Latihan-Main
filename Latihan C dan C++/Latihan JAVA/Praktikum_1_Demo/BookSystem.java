import java.util.Scanner;

public class BookSystem {
    private String nama;
    private String noTelp;
    private String alamat;
    private String email;
    private int[][] room = { { 0, 101, 1000000 }, { 0, 102, 2500000 }, { 1, 103, 2000000 } };
    private boolean loop = true;

    Scanner sc = new Scanner(System.in);

    // nama
    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getNama() {
        return nama;
    }

    // noTelp
    public void setNoTelp(String noTelp) {
        this.noTelp = noTelp;
    }

    public String getNoTelp() {
        return noTelp;
    }

    // alamat
    public void setAlamat(String alamat) {
        this.alamat = alamat;
    }

    public String getAlamat() {
        return alamat;
    }

    // email
    public void setEmail(String email) {
        this.email = email;
    }

    public String getEmail() {
        return email;
    }

    // room
    public int[][] getRoom() {
        return room;
    }

    // Inisialisasi Data
    void init(String nama, String email, String noTelp, String alamat) {
        setNama(nama);
        setEmail(email);
        setNoTelp(noTelp);
        setAlamat(alamat);
    }

    // display Data
    String dispPerson(String dataDiakses) {
        String data = "";
        if (dataDiakses == "nama") {
            data = this.getNama();
        } else if (dataDiakses == "email") {
            data = this.getEmail();
        } else if (dataDiakses == "noTelp") {
            data = this.getNoTelp();
        } else if (dataDiakses == "alamat") {
            data = this.getAlamat();
        } else {
            System.out.println("Data tidak dapat diakses!!!");
        }
        return data;
    }

    // Display Room
    void bookRoom() {
        System.out.println("\nTower At The End Of The World Hotel");
        int[][] roomArr = getRoom();
        // 0=True == available
        if (roomArr[0][0] == 0) {
            System.out.println("1. No. 101");
        } else {
            System.out.println("1. No. 101 (Tidak tersedia)");
        }
        if (roomArr[1][0] == 0) {
            System.out.println("2. No. 102");
        } else {
            System.out.println("2. No. 102 (Tidak tersedia)");
        }
        if (roomArr[2][0] == 0) {
            System.out.println("3. No. 103");
        } else {
            System.out.println("3. No. 103 (Tidak tersedia)");
        }
        System.out.println("Pilih kamar yang tersedia : ");
    }

    // display payment dan data
    void doPayment(int noRoom) {
        // 0=True == available
        noRoom = noRoom - 1;
        int uangTunai;
        int[][] roomArr = getRoom();
        String pilihan = "";
        String pilihan2 = "";
        if (roomArr[noRoom][0] == 0) {
            System.out.println("\n======================");
            System.out.println("Pembayaran Kamar");
            System.out.println("======================");
            System.out.println("Nama : " + dispPerson("nama"));
            System.out.println("No Telp : " + dispPerson("noTelp"));
            System.out.println("Alamat : " + dispPerson("alamat"));
            System.out.println("Email : " + dispPerson("email"));
            System.out.println("No Kamar : " + roomArr[noRoom][1]);
            System.out.println("Harga Kamar : " + roomArr[noRoom][2]);
            System.out.println("======================");
            System.out.println("Masukkan Uang Tunai : ");
            uangTunai = sc.nextInt();
            if (uangTunai > roomArr[noRoom][2]) {
                System.out.println("\nUang Lebih!!!");
                System.out.println("Uang Kembalian: " + (uangTunai - roomArr[noRoom][2]));
            } else if (uangTunai == roomArr[noRoom][2]) {
                System.out.println("\nUang Pas!!!");
            } else if (uangTunai < roomArr[noRoom][2]) {
                System.out.println("\nUang Kurang!!!");
                System.out.println("Hutang : " + (roomArr[noRoom][2] - uangTunai));
            }
            System.out.println("\nKamar berhasil dipesan\n");
            this.room[noRoom][0] = 1;
            System.out.println("Ingin memesan kamar lagi? (y/n)");
            sc.nextLine();
            pilihan2 = sc.nextLine();
            if (pilihan2.equals("y") == true || pilihan2.equals("Y") == true) {
                this.bookRoom();
            } else {
                mainLoopSet(false);
            }
        } else {
            System.out.println("\nMohon maaf, kamar tidak tersedia");
            System.out.println("\nIngin memesan kamar lagi? (y/n)");
            pilihan = sc.nextLine();
            if (pilihan.equals("y") == true || pilihan.equals("Y") == true) {
                mainLoopSet(true);
            } else {
                mainLoopSet(false);
            }
        }
    }

    // Domain Checker
    boolean isContainValidDomain(String email) {
        boolean isValid = false;
        String domain1 = "gmail.com";
        String domain2 = "webmail.umm.ac.id";
        if (email.isEmpty() == false) {
            String domainEmail = email.substring(email.lastIndexOf("@") + 1);
            // contains domain
            if (domainEmail.equals(domain1) == true) {
                isValid = true;
            } else if (domainEmail.equals(domain2) == true) {
                isValid = true;
            }
        }
        // did not conatin domain
        return isValid;
    }

    // Nama Checker
    boolean nameCheck(String nama) {
        if (nama.matches(".*\\d.*")) {
            // contains a number
            return true;
        } else {
            // does not contain a number
            return false;
        }
    }

    // Phone code checker
    boolean iscontainValidPhoneCode(String noTelp) {
        boolean isValid = false;
        String phoneCode = "62";

        if (noTelp.isEmpty() == false) {
            String noTelpCode = noTelp.substring(noTelp.lastIndexOf("+") + 1, 3);
            // contains phoneCode
            if (noTelpCode.equals(phoneCode) == true) {
                isValid = true;
            }
        }
        // did not contains phoneCode
        return isValid;
    }

    void mainLoopSet(boolean bool) {
        if (bool == true) {
            this.loop = bool;
        } else {
            this.loop = bool;
        }
    }

    boolean mainLoopGet() {
        return this.loop;
    }

    // Main
    public static void main(String[] args) {
        BookSystem book = new BookSystem();
        Scanner sc = new Scanner(System.in);
        String nama = "";
        String email = "";
        String noTelp = "";
        String alamat = "";
        int pilihan;
        boolean roomLoop = true;
        System.out.println("Selamat datang di hotel kami");
        System.out.println("Silahkan Registrasi\n");
        // Input nama & num checker
        while (book.nameCheck(nama) == true || nama.isEmpty() == true) {
            System.out.println("Masukkan Nama : ");
            nama = sc.nextLine();
            if (book.nameCheck(nama) == true || nama.isEmpty() == true) {
                System.out.println("\nNama Invalid!!!\n");
            }
        }
        // Input email & domain checker
        while (book.isContainValidDomain(email) == false || email.isEmpty() == true) {
            System.out.println("Masukkan Email : ");
            email = sc.nextLine();
            if (book.isContainValidDomain(email) == false || email.isEmpty() == true) {
                System.out.println("\nEmail Invalid!!!\n");
            }
        }
        // Input Phone num and checker
        while (book.iscontainValidPhoneCode(noTelp) == false || noTelp.isEmpty() == true) {
            System.out.println("Masukkan No Telp (+62) : ");
            noTelp = sc.nextLine();
            if (book.iscontainValidPhoneCode(noTelp) == false || noTelp.isEmpty() == true) {
                System.out.println("\nNo Telpon Invalid!!!\n");
            }
        }
        // Input Alamat and empty checker
        while (alamat.isEmpty() == true) {
            System.out.println("Masukkan Alamat : ");
            alamat = sc.nextLine();
            if (alamat.isEmpty() == true) {
                System.out.println("\nAlamat tidak boleh kosong!!!\n");
            }
        }
        // Inisialisasi data
        book.init(nama, email, noTelp, alamat);
        // ????????
        while (true) {
            roomLoop = book.mainLoopGet();
            if (roomLoop == false) {
                break;
            }
            book.bookRoom();
            pilihan = sc.nextInt();
            book.doPayment(pilihan);
        }
        System.out.println("\nTerima Kasih sudah datang!!!");
        sc.close();
    }
}

// I WANT TO DIE, MAS BRO.