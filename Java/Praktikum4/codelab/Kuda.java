package Java.Praktikum4.codelab;

public class Kuda extends Hewan implements IHerbivora {
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
        System.out.println("Makanan : Tumbuhan");
    }

    @Override
    public void tampilObjek() {
        // TODO Auto-generated method stub
        setSuara("Hikhikhikhikhikhikhik");
        System.out.println("Hewan : Kuda");
        System.out.println("Jenis : Herbivora");
        tampilMakanan();
        bersuara();
        super.tampilObjek();
    }

}
