package Demo.modul2.bangun2D;

import Demo.modul2.LKBangun2D;

public class JajarGenjang extends LKBangun2D {
    private double alas;
    private double tinggi;
    private double miring;

    public void setAlas(double alas) {
        this.alas = alas;
    }

    public double getAlas() {
        return alas;
    }

    public void setTinggi(double tinggi) {
        this.tinggi = tinggi;
    }

    public double getTinggi() {
        return tinggi;
    }

    public void setMiring(double miring) {
        this.miring = miring;
    }

    public double getMiring() {
        return miring;
    }

    public void infoBangun(double alas, double tinggi, double miring) {
        setAlas(alas);
        setTinggi(tinggi);
        setMiring(miring);
        System.out.println("========================");
        System.out.println("Hasil Bangun Jajar Genjang");
        System.out.println("Alas: " + getAlas());
        System.out.println("Tinggi : " + getTinggi());
        System.out.println("Miring : " + getMiring());
    }

    @Override
    public void hitungKeliling() {
        double keliling = 2 * (alas + miring);
        super.setKeliling(keliling);
        System.out.println("Keliling dari Bangun Jajar Genjang tersebut adalah " + super.getKeliling());
    }

    @Override
    public void hitungLuas() {
        double luas = (alas * tinggi);
        super.setLuas(luas);
        System.out.println("Luas dari Bangun Jajar Genjang tersebut adalah " + super.getLuas());
    }
}
