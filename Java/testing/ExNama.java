package Java.testing;

public class ExNama {
    String[] kumpulanNama;

    public ExNama(String[] kumpulanNama) {
        this.kumpulanNama = kumpulanNama;
    }

    public String[] getKumpulanNama() {
        return kumpulanNama;
    }

    public void cekPanjangNama() {
        for (int i = 0; i < getKumpulanNama().length; i++) {
            if (getKumpulanNama()[i].length() > 5) {
                System.out.println(getKumpulanNama()[i] + "--> Panjang nama lebih dari 5");
            } else {
                System.out.println(getKumpulanNama()[i] + "--> Panjang nama 5 atau kurang");
            }
        }
    }

    public static void main(String[] args) {
        String[] nama = { "Agus", "Budi", "Hermanos", "Udin", "Pesawat Terbang Raptor F15" };
        ExNama myObj = new ExNama(nama);
        myObj.cekPanjangNama();
    }
}
