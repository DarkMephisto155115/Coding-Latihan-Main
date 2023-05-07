package Java.Praktikum4.codelab;

public class Kuda extends Hewan implements IHerbivora {
    @Override
    public void setSuara(String suara) {
        super.setSuara(suara);
    }

    @Override
    public void bersuara() {

        System.out.println("Suara : " + super.getSuara());
        super.bersuara();
    }

    @Override
    public void tampilMakanan() {

        System.out.println("Makanan : Tumbuhan");
    }

    @Override
    public void tampilObjek() {

        setSuara("Hikhikhikhikhikhikhik");
        System.out.println("Hewan : Kuda");
        System.out.println("Jenis : Herbivora");
        tampilMakanan();
        bersuara();
        super.tampilObjek();
    }

}
