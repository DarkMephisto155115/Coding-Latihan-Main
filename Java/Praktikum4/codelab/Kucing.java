package Java.Praktikum4.codelab;

public class Kucing extends Hewan implements IKarnivora {
    @Override
    public void setSuara(String suara) {
        // TODO Auto-generated method stub
        super.setSuara(suara);
    }

    @Override
    public void bersuara() {
        // TODO Auto-generated method stub
        System.out.println("Suara : " + super.getSuara());
        super.bersuara();
    }

    @Override
    public void tampilMakanan() {
        // TODO Auto-generated method stub
        System.out.println("Makanan : Daging");
    }

    @Override
    public void tampilObjek() {
        // TODO Auto-generated method stub
        setSuara("Nyaaaaaaaaaaaaaa");
        System.out.println("Hewan : Kucing");
        System.out.println("Jenis : Karnivora");
        tampilMakanan();
        bersuara();
        super.tampilObjek();
    }

}
