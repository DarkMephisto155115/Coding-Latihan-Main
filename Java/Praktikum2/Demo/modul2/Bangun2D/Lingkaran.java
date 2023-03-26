package Demo.modul2.bangun2D;

import Demo.modul2.LKBangun2D;

public class Lingkaran extends LKBangun2D {
    private double jariJari;
    private static double phi = Math.PI;

    public void setJariJari(double jariJari) {
        this.jariJari = jariJari;
    }

    public double getJariJari() {
        return jariJari;
    }

    public void infoBangun(double jariJari) {
        setJariJari(jariJari);
        System.out.println("========================");
        System.out.println("Hasil Bangun Lingkaran");
        System.out.println("Jari-jari : " + getJariJari());
    }

    @Override
    public void hitungKeliling() {
        double keliling = (double) 2 * phi * jariJari;
        super.setKeliling(keliling);
        System.out.println("Keliling dari Bangun Lingkaran tersebut adalah " + super.getKeliling());
    }

    @Override
    public void hitungLuas() {
        double luas = phi * (jariJari * jariJari);
        super.setLuas(luas);
        System.out.println("Luas dari Bangun Lingkaran tersebut adalah " + super.getLuas());
    }
}
