package Demo.modul2.bangun2D;

import Demo.modul2.LKBangun2D;

public class Persegi extends LKBangun2D {
    private double sisi;

    public void setSisi(double sisi) {
        this.sisi = sisi;
    }

    public double getSisi() {
        return sisi;
    }

    public void infoBangun(double sisi) {
        setSisi(sisi);
        System.out.println("========================");
        System.out.println("Hasil Bangun Persegi");
        System.out.println("Sisi : " + getSisi());
    }

    @Override
    public void hitungKeliling() {
        double keliling = 4 * sisi;
        super.setKeliling(keliling);
        System.out.println("Keliling dari Bangun Persegi tersebut adalah " + super.getKeliling());
    }

    @Override
    public void hitungLuas() {
        double luas = sisi * sisi;
        super.setLuas(luas);
        System.out.println("Luas dari Bangun Persegi tersebut adalah " + super.getLuas());
    }

}
