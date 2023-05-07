package Java.Praktikum4.Demo.Item.ItemList;

import Java.Praktikum4.Demo.Item.AlatMusik;
import Java.Praktikum4.Demo.Item.Item;

public class Ukulele extends Item implements AlatMusik {
    public void innit() {
        setNamaBarang("Ukulele");
        setBrand("Mahalo Suprano");
        setModel("-");
        setPrice(250_000);
        setOnSale(false);
        setDiscount(MAX_DISCOUNT);
    }

    @Override
    public void deskripsiBarang() {

        innit();
        super.deskripsiBarang();
    }
}
