import java.util.Scanner;

public class BookSystem {
    private String nama;
    private String noTelp;
    private String alamat;
    private String email;
    private int[][] room = { { 0, 101, 1000000 }, { 0, 102, 2500000 }, { 1, 103, 2000000 } };
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

    void init(String nama, String email, String noTelp, String alamat) {
        setNama(nama);
        setEmail(email);
        setNoTelp(noTelp);
        setAlamat(alamat);
    }

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

    void bookRoom() {
        System.out.println("\nTower At The End Of The World Hotel");
        // 0=True == available
        if (room[0][0] == 0) {
            System.out.println("1. No. 101");
        } else {
            System.out.println("1. No. 101 (Tidak tersedia)");
        }
        if (room[1][0] == 0) {
            System.out.println("2. No. 102");
        } else {
            System.out.println("2. No. 102 (Tidak tersedia)");
        }
        if (room[2][0] == 0) {
            System.out.println("3. No. 103");
        } else {
            System.out.println("3. No. 103 (Tidak tersedia)");
        }
        System.out.println("Pilih kamar yang tersedia : ");
    }

    void doPayment(int noRoom) {
        // 0=True == available
        noRoom = noRoom - 1;
        int uangTunai;
        String pilihan = "";
        String pilihan2 = "";
        if (room[noRoom][0] == 0) {
            System.out.println("\n======================");
            System.out.println("Pembayaran Kamar");
            System.out.println("Nama : " + dispPerson("nama"));
            System.out.println("No Telp : " + dispPerson("noTelp"));
            System.out.println("Alamat : " + dispPerson("alamat"));
            System.out.println("Email : " + dispPerson("email"));
            System.out.println("No Kamar : " + room[noRoom][1]);
            System.out.println("Harga Kamar : " + room[noRoom][2]);
            System.out.println("======================");
            System.out.println("Masukkan Uang Tunai : ");
            uangTunai = sc.nextInt();
            if (uangTunai > room[noRoom][2]) {
                System.out.println("\nUang Lebih!!!");
                System.out.println("Uang Kembalian: " + (uangTunai - room[noRoom][2]));
            } else if (uangTunai == room[noRoom][2]) {
                System.out.println("\nUang Pas!!!");
            } else if (uangTunai < room[noRoom][2]) {
                System.out.println("\nUang Kurang!!!");
                System.out.println("Hutang : " + (room[noRoom][2] - uangTunai));
            }
            System.out.println("\nKamar berhasil dipesan");
            this.room[noRoom][0] = 1;
            System.out.println("Ingin memesan kamar lagi? (y/n)");
            sc.nextLine();
            pilihan2 = sc.nextLine();
            if (pilihan2.equals("y") == true || pilihan2.equals("Y") == true) {
                this.bookRoom();
            } else {
                System.exit(0);
            }
        } else {
            System.out.println("\nMohon maaf, kamar tidak tersedia");
            System.out.println("\nIngin memesan kamar lagi? (y/n)");
            pilihan = sc.nextLine();
            if (pilihan.equals("y") == true || pilihan.equals("Y") == true) {
            } else {
                System.exit(0);
            }
        }
    }

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

    boolean nameCheck(String nama) {
        if (nama.matches(".*\\d.*")) {
            // contains a number
            return true;
        } else {
            // does not contain a number
            return false;
        }
    }

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

    public static void main(String[] args) {
        BookSystem book = new BookSystem();
        Scanner sc = new Scanner(System.in);
        String nama = "";
        String email = "";
        String noTelp = "";
        String alamat = "";
        int pilihan;

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
            book.bookRoom();
            pilihan = sc.nextInt();
            book.doPayment(pilihan);
        }
    }
}

// I WANT TO DIE, MAS BRO.