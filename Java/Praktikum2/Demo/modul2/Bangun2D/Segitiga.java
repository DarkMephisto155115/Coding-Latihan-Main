package Demo.modul2.Bangun2D;

import Demo.modul2.*;

public class Segitiga extends LKBangun2D {
    private double alas;
    private double tinggi;

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

    public void infoBangun(double alas, double tinggi) {
        setAlas(alas);
        setTinggi(tinggi);
        System.out.println("========================");
        System.out.println("Hasil Bangun Segitiga");
        System.out.println("Alas: " + getAlas());
        System.out.println("Tinggi : " + getTinggi());
    }

    @Override
    public void hitungKeliling() {
        double keliling = (alas + alas + alas);
        super.setKeliling(keliling);
        System.out.println("Keliling dari Bangun Segitiga tersebut adalah " + super.getKeliling());
    }

    @Override
    public void hitungLuas() {
        double luas = (alas * tinggi) / (double) 2;
        super.setLuas(luas);
        System.out.println("Luas dari Bangun Segitiga tersebut adalah " + super.getLuas());
    }

}
