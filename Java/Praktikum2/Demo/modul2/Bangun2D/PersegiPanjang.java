package Demo.modul2.bangun2D;

import Demo.modul2.LKBangun2D;

public class PersegiPanjang extends LKBangun2D {
    private double panjang;
    private double lebar;

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

    public void infoBangun(double panjang, double lebar) {
        setPanjang(panjang);
        setLebar(lebar);
        System.out.println("========================");
        System.out.println("Hasil Bangun Persegi Panjang");
        System.out.println("Panjang : " + getPanjang());
        System.out.println("Lebar : " + getLebar());
    }

    @Override
    public void hitungKeliling() {
        double keliling = 2 * (panjang + lebar);
        super.setKeliling(keliling);
        System.out.println("Keliling dari Bangun Persegi Panjang tersebut adalah " + super.getKeliling());
    }

    @Override
    public void hitungLuas() {
        double luas = panjang * lebar;
        super.setLuas(luas);
        System.out.println("Luas dari Bangun Persegi Panjang tersebut adalah " + super.getLuas());
    }
}
