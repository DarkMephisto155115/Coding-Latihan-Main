package Java.Praktikum4.Demo.Item.ItemList;

import Java.Praktikum4.Demo.Item.AlatElektronik;
import Java.Praktikum4.Demo.Item.Item;

public class Televisi extends Item implements AlatElektronik {
    public void innit() {
        setNamaBarang("Televisi");
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
