package Java.testing;

class mobi {
    String warna;
    String merek;
    int tahun;

    public mobi(String warna, String merek, int tahun) {
        this.warna = warna;
        this.merek = merek;
        this.tahun = tahun;
    }

    public void tampil() {
        System.out.println("Tuliskan ke layar Mobil " + merek + " warna " + warna + "keluaran tahun " + tahun);
    }

}

public class mobil {
    public static void main(String[] args) {
        mobi obj = new mobi("hitam", "Avanza", 2011);
        obj.tampil();
    }
}