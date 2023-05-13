package Java.Praktikum4.Demo.Item.ItemList;

import Java.Praktikum4.Demo.Item.AlatElektronik;
import Java.Praktikum4.Demo.Item.Item;

public class PcGaming extends Item implements AlatElektronik {
    public void innit() {
        setNamaBarang("Pc Gaming");
        setBrand("Ares");
        setModel("Ares-01 (i5 13400f, RTX 4070)");
        setPrice(15_000_000);
        setOnSale(false);
        setDiscount(MAX_DISCOUNT);
    }

    @Override
    public void deskripsiBarang() {

        innit();
        super.deskripsiBarang();
    }
}
