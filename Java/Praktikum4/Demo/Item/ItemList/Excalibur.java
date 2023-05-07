package Java.Praktikum4.Demo.Item.ItemList;

import Java.Praktikum4.Demo.Item.Item;

public class Excalibur extends Item {
    public void innit() {
        setNamaBarang("Noble Phantasm");
        setBrand("Artoria Pendragon");
        setModel("Excalibur");
        setPrice(69_696_969);
        setOnSale(false);
        setDiscount(0);
    }

    @Override
    public void deskripsiBarang() {

        innit();
        super.deskripsiBarang();
    }

}
