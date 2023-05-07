package Java.Praktikum4.Demo.Item.ItemList;

import Java.Praktikum4.Demo.Item.AlatElektronik;
import Java.Praktikum4.Demo.Item.Item;

public class KipasAngin extends Item implements AlatElektronik {
    public void innit() {
        setNamaBarang("Kipas Angin");
        setBrand("Niko");
        setModel("NK 903");
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
