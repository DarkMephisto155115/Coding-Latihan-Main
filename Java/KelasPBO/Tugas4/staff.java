package Java.KelasPBO.Tugas4;

public class staff {
    private String nama;
    private String alamat;
    private double gajiPokok;
    private double tunjangan;
    private int level;


    public staff(String nama, String alamat, double gajiPokok, double tunjangan, int level) {
        this.nama = nama;
        this.alamat = alamat;
        this.gajiPokok = gajiPokok;
        this.tunjangan = tunjangan;
        this.level = level;
    }


    public String getNama() {
        return nama;
    }


    public String getAlamat() {
        return alamat;
    }


    public int getLevel() {
        return level;
    }

    public double bayarGaji(){
        return gajiPokok+tunjangan;
    }

    public void cetakInfo() {

    }

}
