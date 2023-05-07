package Java.Praktikum4.Demo.Item.ItemList;

import Java.Praktikum4.Demo.Item.AlatElektronik;
import Java.Praktikum4.Demo.Item.AlatMusik;
import Java.Praktikum4.Demo.Item.Item;

public class Piano extends Item implements AlatElektronik, AlatMusik {
    public void innit() {
        setNamaBarang("Piano");
        setBrand("Yamaho");
        setModel("P53");
        setPrice(4_900_000);
        setOnSale(false);
        setDiscount(AlatMusik.MAX_DISCOUNT);
    }

    @Override
    public void deskripsiBarang() {

        innit();
        super.deskripsiBarang();
    }
}
