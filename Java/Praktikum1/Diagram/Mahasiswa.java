import java.util.Scanner;

public class Mahasiswa {
    private String nama;
    private String nim;
    private String jurusan;
    private String[][] indeksNilai = { { "", "Bindo" }, { "", "Orkom" }, { "", "PTI" }, { "", "Progdas" },
            { "", "Kalkulus" } };
    private double[] ipNilai = { 0, 0, 0, 0, 0 };
    private double nilaiIPK;
    Scanner sc = new Scanner(System.in);

    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getNama() {
        return nama;
    }

    public void setNim(String nim) {
        this.nim = nim;
    }

    public String getNim() {
        return nim;
    }

    public void setJurusan(String jurusan) {
        this.jurusan = jurusan;
    }

    public String getJurusan() {
        return jurusan;
    }

    public void setIndeksNilai(String[][] indeksNilai) {
        this.indeksNilai = indeksNilai;
    }

    public String[][] getIndeksNilai() {
        return indeksNilai;
    }

    public void setNilaiIPK(double nilaiIPK) {
        this.nilaiIPK = nilaiIPK;
    }

    public double getNilaiIPK() {
        return nilaiIPK;
    }

    public double[] getIpNilai() {
        return ipNilai;
    }

    public void setIpNilai(double[] ipNilai) {
        this.ipNilai = ipNilai;
    }

    public void ipConv() {
        String indeksNilai[][] = getIndeksNilai();

        for (int i = 0; i < 5; i++) {
            if (indeksNilai[i][0].equals("A")) {
                this.ipNilai[i] = 4;
            } else if (indeksNilai[i][0].equals("B")) {
                this.ipNilai[i] = 3;
            } else if (indeksNilai[i][0].equals("C")) {
                this.ipNilai[i] = 2;
            } else if (indeksNilai[i][0].equals("D")) {
                this.ipNilai[i] = 1;
            } else if (indeksNilai[i][0].equals("E")) {
                this.ipNilai[i] = 0;
            }
        }

    }

    public void hitungIP() {
        double total = 0;
        double[] ipNilai = getIpNilai();
        for (int i = 0; i < 5; i++) {
            total = total + ipNilai[i];
        }
        double ipk = total / 5;
        setNilaiIPK(ipk);
    }

    public void init() {
        String nama;
        String nim;
        String jurusan;
        String[][] indeksNilai = getIndeksNilai();
        System.out.println("Masukkan Nama : ");
        nama = sc.nextLine();
        System.out.println("Masukkan NIM : ");
        nim = sc.nextLine();
        System.out.println("Masukkan Jurusan : ");
        jurusan = sc.nextLine();
        for (int i = 0; i < 5; i++) {
            System.out.println("Masukkan Indeks " + indeksNilai[i][1]);
            indeksNilai[i][0] = sc.nextLine();
        }
        setNama(nama);
        setNim(nim);
        setJurusan(jurusan);
        setIndeksNilai(indeksNilai);
    }

    public void dispPerson() {
        String[][] indeksNilai = getIndeksNilai();
        System.out.println("Nama : " + getNama());
        System.out.println("NIM : " + getNim());
        System.out.println("Jurusan : " + getJurusan());
        for (int i = 0; i < 5; i++) {
            System.out.println("Indeks nilai dari " + indeksNilai[i][1] + " = " + indeksNilai[i][0]);
        }
        System.out.println("IPK yang didapatkan : " + getNilaiIPK());
    }

    public void kategoriIP() {
        double IPK = getNilaiIPK();
        System.out.println("Kategori IPK yang didapatkan : ");
        if (IPK > 3.5) {
            System.out.println("IPK SANGAT BAGUS");
        } else if (IPK >= 3.0 && IPK < 3.5) {
            System.out.println("IPK BAGUS");
        } else if (IPK >= 2.5 && IPK < 3.0) {
            System.out.println("IPK KURANG");
        } else {
            System.out.println("IPK SANGAT KURANG");
        }
    }

    public static void main(String[] args) {
        Mahasiswa Obj = new Mahasiswa();

        Obj.init();
        Obj.ipConv();
        Obj.hitungIP();
        System.out.println("==================================");
        Obj.dispPerson();
        System.out.println("==================================");
        Obj.kategoriIP();
    }
}
