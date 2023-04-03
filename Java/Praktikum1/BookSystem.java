import java.util.Scanner;
import java.lang.String;
import java.util.regex.*;

public class BookSystem {
    private String nama;
    private String noTelp;
    private String alamat;
    private String email;
    private int[][] room = { { 0, 101, 1000000 }, { 0, 102, 2000000 }, { 1, 103, 2500000 }, { 1, 104, 2000000 },
            { 0, 105, 1500000 } };
    private int uangTunai;

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

    // Uang
    public void setUangTunai(int uangTunai) {
        this.uangTunai = uangTunai;
    }

    public int getUangTunai() {
        return uangTunai;
    }

    // Domain Checker
    boolean isContainValidDomain(String email) {
        boolean isValid = false;

        if (email.isEmpty() == false) {
            String emailRegex = "^[\\w!#$%&amp;'+/=?`{|}~^-]+(?:\\.[\\w!#$%&amp;'+/=?`{|}~^-]+)*@(?:[a-zA-Z0-9-]+\\.)+[a-zA-Z]{2,6}$";
            Pattern emailPattern = Pattern.compile(emailRegex);
            Matcher emailMatcher = emailPattern.matcher(email);
            boolean emailIsValid = emailMatcher.matches();

            // contains domain
            if (emailIsValid == true) {
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

        if (noTelp.isEmpty() == false) {
            String phoneRegex = "^\\+62[0-9]{9,}$";
            Pattern phonePattern = Pattern.compile(phoneRegex);
            Matcher phoneMatcher = phonePattern.matcher(noTelp);
            boolean phoneIsValid = phoneMatcher.matches();
            // contains phoneCode
            if (phoneIsValid == true) {
                isValid = true;
            }

        }
        // did not contains phoneCode
        return isValid;
    }

    // Inisialisasi Data
    void init() {
        String nama = "";
        String email = "";
        String noTelp = "";
        String alamat = "";
        System.out.println("Selamat datang di hotel kami");
        System.out.println("Silahkan Registrasi\n");
        // Input nama & num checker
        while (nameCheck(nama) == true || nama.isEmpty() == true) {
            System.out.println("Masukkan Nama : ");
            nama = sc.nextLine();
            if (nameCheck(nama) == true || nama.isEmpty() == true) {
                System.out.println("\nNama Invalid!!!\n");
            }
        }
        // Input email & domain checker
        while (isContainValidDomain(email) == false || email.isEmpty() == true) {
            System.out.println("Masukkan Email : ");
            email = sc.nextLine();
            if (isContainValidDomain(email) == false || email.isEmpty() == true) {
                System.out.println("\nEmail Invalid!!!\n");
            }
        }
        // Input Phone num and checker
        while (iscontainValidPhoneCode(noTelp) == false || noTelp.isEmpty() == true) {
            System.out.println("Masukkan No Telp (+62) : ");
            noTelp = sc.nextLine();
            if (iscontainValidPhoneCode(noTelp) == false || noTelp.isEmpty() == true) {
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
        setNama(nama);
        setEmail(email);
        setNoTelp(noTelp);
        setAlamat(alamat);
    }

    // display Data
    void dispPerson() {
        System.out.println("Nama : " + getNama());
        System.out.println("No Telp : " + getNoTelp());
        System.out.println("Alamat : " + getAlamat());
        System.out.println("Email : " + getEmail());
    }

    // Display Room
    void bookRoom() {
        System.out.println("\nAdministrator's Ground One Hotel");
        int[][] roomArr = getRoom();
        // 0=True == available
        System.out.println("=====================================");
        System.out.println("List kamar        Harga");
        System.out.println("=====================================");
        for (int i = 0; i < 5; i++) {
            if (roomArr[i][0] == 0) {
                System.out.println(i + 1 + " No kamar : " + roomArr[i][1] + " Rp." + roomArr[i][2]);

            } else {
                System.out.println(i + 1 + " No kamar : " + roomArr[i][1] + "  " + "(Tidak tersedia)");
            }
        }
        System.out.println("Pilih kamar yang tersedia : ");
        try {
            int pilihan = sc.nextInt();
            if (pilihan < 5 || pilihan >= 1) {
                doPayment(pilihan);
            }
        } catch (Exception e) {
            System.out.println("\nKamar tidak ditemukan!!!");
            bookRoom();
        }

    }

    // display payment dan data
    void doPayment(int noRoom) {
        // 0=True == available
        noRoom = noRoom - 1;
        int uangTunai;
        int[][] roomArr = getRoom();
        String pilihan = "";
        if (roomArr[noRoom][0] == 0) {
            System.out.println("\n======================");
            System.out.println("Pembayaran Kamar");
            System.out.println("======================");
            dispPerson();
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
                System.out.println("\nUang Tidak Cukup!!!");
                System.out.println("\nSilahkan Ambil Uang Terlebih Dahulu");
                System.out.println("\nIngin memesan kamar lagi? (y/n)");
                sc.nextLine();
                pilihan = sc.nextLine();
                if (pilihan.equals("y") == true || pilihan.equals("Y") == true) {
                    this.bookRoom();
                } else {
                    System.out.println("\nTerima Kasih sudah datang!!!");
                    System.exit(0);
                }
            }
            System.out.println("\nKamar berhasil dipesan\n");
            setUangTunai(uangTunai);
            this.room[noRoom][0] = 1;
            System.out.println("Ingin memesan kamar lagi? (y/n)");
            sc.nextLine();
            pilihan = sc.nextLine();
            if (pilihan.equals("y") == true || pilihan.equals("Y") == true) {
                this.bookRoom();
            }
        } else {
            System.out.println("\nMohon maaf, kamar tidak tersedia");
            System.out.println("\nIngin memesan kamar lagi? (y/n)");
            sc.nextLine();
            pilihan = sc.nextLine();
            if (pilihan.equals("y") == true || pilihan.equals("Y") == true) {
                this.bookRoom();
            }
        }
    }

    // Main
    public static void main(String[] args) {
        BookSystem book = new BookSystem();
        // Inisialisasi data
        book.init();
        // Sistem pemesanan
        book.bookRoom();
        System.out.println("\nTerima Kasih sudah datang!!!");
    }
}

// I WANT TO DIE, MAS BRO.
