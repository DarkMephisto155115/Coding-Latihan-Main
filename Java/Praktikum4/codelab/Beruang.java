package Java.Praktikum4.codelab;

public class Beruang extends Hewan implements IHerbivora, IKarnivora {
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
        System.out.println("Makanan : Daging + Tumbuhan");
    }

    @Override
    public void tampilObjek() {
        // TODO Auto-generated method stub
        setSuara("Haummmmmmmm");
        System.out.println("Hewan : Beruang");
        System.out.println("Jenis : Karnivora + Herbivora");
        tampilMakanan();
        bersuara();
        super.tampilObjek();
    }
}
