package Java.Praktikum4.Demo.Item;

public abstract class Item {
    public String brand;
    public String model;
    public int price;
    public boolean onSale;
    public double discount;

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

    public int getDiscountedPrice() {
        return 0;
    }

    public void deskripsiBarang() {

    }
}
