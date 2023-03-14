package Demo.modul2.Bangun3D;

import Demo.modul2.*;

public class Kerucut extends LKBangun3D {
    private double jariJari;
    private double tinggi;
    private double phi = (double) 22 / 7;

    public void setJariJari(double jariJari) {
        this.jariJari = jariJari;
    }

    public double getJariJari() {
        return jariJari;
    }

    public void setTinggi(double tinggi) {
        this.tinggi = tinggi;
    }

    public double getTinggi() {
        return tinggi;
    }

    @Override
    public void infoBangun(double jariJari, double tinggi) {
        setJariJari(jariJari);
        setTinggi(tinggi);
        System.out.println("========================");
        System.out.println("Hasil Bangun Kerucut");
        System.out.println("Jari-jari : " + getJariJari());
        System.out.println("Tinggi : " + getTinggi());
    }

    @Override
    public void hitungVolume() {
        double volume = (double) 1 / 3 * phi * ((jariJari * jariJari) * tinggi);
        super.setVolume(volume);
        System.out.println("Volume dari Bangun Kerucut tersebut adalah " + super.getVolume());

    }
}
