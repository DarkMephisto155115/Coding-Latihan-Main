package Java.Praktikum4.Demo.Item.ItemList;

import Java.Praktikum4.Demo.Item.AlatMusik;
import Java.Praktikum4.Demo.Item.Item;

public class Ukulele extends Item implements AlatMusik {
    public void innit() {
        setNamaBarang("Gitar");
        setBrand("Yamaho");
        setModel("Yamaho Gitar Akustik F310");
        setPrice(1_000_000);
        setOnSale(false);
        setDiscount(MAX_DISCOUNT);
    }

    @Override
    public void deskripsiBarang() {

        innit();
        super.deskripsiBarang();
    }
}
