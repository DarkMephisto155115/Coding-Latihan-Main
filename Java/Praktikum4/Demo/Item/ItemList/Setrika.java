package Java.Praktikum4.Demo.Item.ItemList;

import Java.Praktikum4.Demo.Item.AlatElektronik;
import Java.Praktikum4.Demo.Item.Item;

public class Setrika extends Item implements AlatElektronik {
    public void innit() {
        setNamaBarang("Setrika");
        setBrand("Philips");
        setModel("GC1418");
        setPrice(350_000);
        setOnSale(false);
        setDiscount(MAX_DISCOUNT);
    }

    @Override
    public void deskripsiBarang() {

        innit();
        super.deskripsiBarang();
    }
}
