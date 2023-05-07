package Java.Praktikum4.Demo.Item.ItemList;

import Java.Praktikum4.Demo.Item.AlatMusik;
import Java.Praktikum4.Demo.Item.Item;

public class Klarinet extends Item implements AlatMusik {
    public void innit() {
        setNamaBarang("Gitar");
        setBrand("Yamaho");
        setModel("YCL-221");
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
