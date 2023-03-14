package Demo.modul2.Bangun3D;

import Demo.modul2.*;

public class Bola extends LKBangun3D {
    private double jariJari;
    private double phi = (double) 22 / 7;

    public void setJariJari(double jariJari) {
        this.jariJari = jariJari;
    }

    public double getJariJari() {
        return jariJari;
    }

    @Override
    public void infoBangun(double jariJari) {
        setJariJari(jariJari);
        System.out.println("========================");
        System.out.println("Hasil Bangun Bola");
        System.out.println("Jari-jari: " + getJariJari());
    }

    @Override
    public void hitungVolume() {
        double volume = (double) 4 / 3 * phi * (jariJari * jariJari * jariJari);
        super.setVolume(volume);
        System.out.println("Volume dari Bangun Bola tersebut adalah " + super.getVolume());

    }

}
