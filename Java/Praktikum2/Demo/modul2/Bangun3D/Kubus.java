package Demo.modul2.Bangun3D;

import Demo.modul2.*;

public class Kubus extends LKBangun3D {
    private double rusuk;

    public void setRusuk(double rusuk) {
        this.rusuk = rusuk;
    }

    public double getRusuk() {
        return rusuk;
    }

    @Override
    public void infoBangun(double rusuk) {
        setRusuk(rusuk);
        System.out.println("========================");
        System.out.println("Hasil Bangun Kubus");
        System.out.println("Rusuk : " + getRusuk());
    }

    @Override
    public void hitungVolume() {
        double volume = (rusuk * rusuk * rusuk);
        super.setVolume(volume);
        System.out.println("Volume dari Bangun Kubus tersebut adalah " + super.getVolume());

    }
}
