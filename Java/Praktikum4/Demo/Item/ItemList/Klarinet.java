package Java.Praktikum4.Demo.Item.ItemList;

import Java.Praktikum4.Demo.Item.AlatMusik;
import Java.Praktikum4.Demo.Item.Item;

public class Klarinet extends Item implements AlatMusik {
    public void innit() {
        setNamaBarang("Klarinet");
        setBrand("Buffet Crampon");
        setModel("YCL-221");
        setPrice(2_000_000);
        setOnSale(false);
        setDiscount(MAX_DISCOUNT);
    }

    @Override
    public void deskripsiBarang() {

        innit();
        super.deskripsiBarang();
    }
}
