package Java.Praktikum4.codelab;

public class Beruang extends Hewan implements IHerbivora, IKarnivora {
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

        System.out.println("Makanan : Daging + Tumbuhan");
    }

    @Override
    public void tampilObjek() {

        setSuara("Haummmmmmmm");
        System.out.println("Hewan : Beruang");
        System.out.println("Jenis : Karnivora + Herbivora");
        tampilMakanan();
        bersuara();
        super.tampilObjek();
    }
}
