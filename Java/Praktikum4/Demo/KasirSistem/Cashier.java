package Java.Praktikum4.Demo;

public class Cashier {
    public double currentPrice;
    public double[] currentDiscount = { 0, 0 };
    public double totalDiscount;
    public double total;
    public String code;
    public Voucher[] vouchers = new Voucher[5];

    public void addPrice(double price) {
        currentPrice = price;
        setTotal(this.total += price);
    }

    public double getCurrentDiscount(int i) {
        return currentDiscount[i];
    }

    public void addDisc(double memberDiscount, double voucherDiscount) {
        currentDiscount[0] = memberDiscount;
        currentDiscount[1] = voucherDiscount;
        totalDiscount = memberDiscount + voucherDiscount;
    }

    public void addVoucher(String code) {
        this.code = code;
    }

    public double getTotalDiscount() {
        return totalDiscount;
    }

    public void setTotalDiscount(double totalDiscount) {
        this.totalDiscount = totalDiscount;
    }

    public double getTotal() {
        return total;
    }

    private void setTotal(double total) {
        this.total = total;
    }
}
