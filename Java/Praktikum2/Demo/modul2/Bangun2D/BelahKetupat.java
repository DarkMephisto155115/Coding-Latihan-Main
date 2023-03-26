package Demo.modul2.bangun2D;

import Demo.modul2.LKBangun2D;

public class BelahKetupat extends LKBangun2D {
    private double sisi;
    private double d1;
    private double d2;

    public void setSisi(double sisi) {
        this.sisi = sisi;
    }

    public double getSisi() {
        return sisi;
    }

    public void setD1(double d1) {
        this.d1 = d1;
    }

    public double getD1() {
        return d1;
    }

    public void setD2(double d2) {
        this.d2 = d2;
    }

    public double getD2() {
        return d2;
    }

    public void infoBangun(double sisi, double d1, double d2) {
        setSisi(sisi);
        setD1(d1);
        setD2(d2);
        System.out.println("========================");
        System.out.println("Hasil Bangun Jajar Genjang");
        System.out.println("Sisi: " + getSisi());
        System.out.println("D1 : " + getD1());
        System.out.println("D1 : " + getD2());
    }

    @Override
    public void hitungKeliling() {
        double keliling = 4 * sisi;
        super.setKeliling(keliling);
        System.out.println("Keliling dari Bangun Belah Ketupat tersebut adalah " + super.getKeliling());
    }

    @Override
    public void hitungLuas() {
        double luas = (d1 * d2) / 2;
        super.setLuas(luas);
        System.out.println("Luas dari Bangun Belah Ketupat tersebut adalah " + super.getLuas());
    }
}
