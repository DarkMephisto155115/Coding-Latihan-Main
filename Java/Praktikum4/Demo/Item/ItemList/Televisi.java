package Java.Praktikum4.Demo.Item.ItemList;

import Java.Praktikum4.Demo.Item.AlatElektronik;
import Java.Praktikum4.Demo.Item.Item;

public class Televisi extends Item implements AlatElektronik {
    public void innit() {
        setNamaBarang("Televisi");
        setBrand("Panasonac");
        setModel("PLD 32D1852");
        setPrice(1_000_000);
        setOnSale(true);
        setDiscount(MAX_DISCOUNT);
    }

    @Override
    public void deskripsiBarang() {

        innit();
        super.deskripsiBarang();
    }
}
