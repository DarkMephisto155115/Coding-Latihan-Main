package Java.Praktikum4.Demo.Item.ItemList;

import Java.Praktikum4.Demo.Item.AlatElektronik;
import Java.Praktikum4.Demo.Item.AlatMusik;
import Java.Praktikum4.Demo.Item.Item;

public class GitarElektrik extends Item implements AlatMusik, AlatElektronik {
    public void innit() {
        setNamaBarang("Gitar Elektrik");
        setBrand("Yamaho");
        setModel("RX-0");
        setPrice(1_000_000);
        setOnSale(true);
        setDiscount(AlatMusik.MAX_DISCOUNT);
    }

    @Override
    public void deskripsiBarang() {

        innit();
        super.deskripsiBarang();
    }
}
