package Java.Praktikum4.codelab;

public class Kucing extends Hewan implements IKarnivora {
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

        System.out.println("Makanan : Daging");
    }

    @Override
    public void tampilObjek() {

        setSuara("Nyaaaaaaaaaaaaaa");
        System.out.println("Hewan : Kucing");
        System.out.println("Jenis : Karnivora");
        tampilMakanan();
        bersuara();
        super.tampilObjek();
    }

}
