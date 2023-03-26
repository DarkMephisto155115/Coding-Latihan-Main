package Demo.modul2.bangun3D;

import Demo.modul2.LKBangun3D;

public class Balok extends LKBangun3D {
    private double panjang;
    private double lebar;
    private double tinggi;

    public void setPanjang(double panjang) {
        this.panjang = panjang;
    }

    public double getPanjang() {
        return panjang;
    }

    public void setLebar(double lebar) {
        this.lebar = lebar;
    }

    public double getLebar() {
        return lebar;
    }

    public void setTinggi(double tinggi) {
        this.tinggi = tinggi;
    }

    public double getTinggi() {
        return tinggi;
    }

    @Override
    public void infoBangun(double panjang, double lebar, double tinggi) {
        setPanjang(panjang);
        setLebar(lebar);
        setTinggi(tinggi);
        System.out.println("========================");
        System.out.println("Hasil Bangun Balok");
        System.out.println("Panjang: " + getPanjang());
        System.out.println("Lebar : " + getLebar());
        System.out.println("Tinggi : " + getTinggi());
    }

    @Override
    public void hitungVolume() {
        double volume = panjang * lebar * tinggi;
        super.setVolume(volume);
        System.out.println("Volume dari Bangun Balok tersebut adalah " + super.getVolume());

    }
}
