package Demo.modul2.bangun3D;

import Demo.modul2.LKBangun3D;

public class Tabung extends LKBangun3D {
    private double jariJari;
    private double tinggi;
    private static double phi = Math.PI;

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
        System.out.println("Hasil Bangun Tabung");
        System.out.println("Jari-jari : " + getJariJari());
        System.out.println("Tinggi : " + getTinggi());
    }

    @Override
    public void hitungVolume() {
        double volume = (double) phi * ((jariJari * jariJari) * tinggi);
        super.setVolume(volume);
        System.out.println("Volume dari Bangun Tabung tersebut adalah " + super.getVolume());
    }
}
