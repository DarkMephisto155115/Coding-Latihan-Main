package Java.Praktikum4.Demo.Item;

import java.text.NumberFormat;
import java.util.Locale;
import java.text.DecimalFormat;

public abstract class Item {
    public String namaBarang;
    public String brand;
    public String model;
    public int price;
    public boolean onSale;
    public double discount;


    Locale locale = new Locale.Builder().setLanguage("id").setRegion("ID").build();
    NumberFormat currencyFormatter = NumberFormat.getCurrencyInstance(locale);

    public void setNamaBarang(String namaBarang) {
        this.namaBarang = namaBarang;
    }

    public String getNamaBarang() {
        return namaBarang;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public void setOnSale(boolean onSale) {
        this.onSale = onSale;
    }

    public void setDiscount(double discount) {
        this.discount = discount;
    }

    public String getBrand() {
        return brand;
    }

    public String getModel() {
        return model;
    }

    public int getPrice() {
        return price;
    }

    public boolean isOnSale() {
        return onSale;
    }

    public double getDiscount() {
        return discount;
    }

    public double getDiscountedPrice() {
        if (onSale) {
            return (getPrice() - (getPrice() * getDiscount()));
        } else {
            return getPrice();
        }

    }

    public void deskripsiBarang() {
        DecimalFormat df = new DecimalFormat("#%");
        System.out.println("===========================================");
        System.out.println("|\t\t\t\t\t  |");
        System.out.println("| \t    Deskripsi Barang\t\t  |");
        System.out.println("|\t\t\t\t\t  |");
        System.out.println("===========================================");
        System.out.println("Nama Barang : " + getNamaBarang());
        System.out.println("Brand : " + getBrand());
        System.out.println("Model Barang : " + getModel());
        System.out.println("Harga Barang : " + currencyFormatter.format(getPrice()));
        if (isOnSale()) {
            System.out.println("Status Diskon : " + df.format(getDiscount()));
            System.out.println("Harga setelah diskon : " + currencyFormatter.format(getDiscountedPrice()));
        } else {
            System.out.println("Status Diskon : Tidak ada Diskon");
        }
    }

}
