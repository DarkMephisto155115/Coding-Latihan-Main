package Java.Praktikum4.Demo;

import java.time.LocalDateTime;

public class Voucher {
    public String code;
    public double discount;
    public int days;
    LocalDateTime currentDate = LocalDateTime.now();
    LocalDateTime expirationDate;

    public Voucher(String code, double discount, int days) {
        this.code = code;
        this.discount = discount;
        this.days = days;
    }

    public void setCode(String code) {
        this.code = code;
    }

    public String getCode() {
        return code;
    }

    public void setDiscount(double discount) {
        this.discount = discount;
    }

    public double getDiscount() {
        return discount;
    }

    public int getDays() {
        return days;
    }

    public void setDays(int days) {
        this.days = days;
    }

    public boolean isValid() {
        expirationDate = LocalDateTime.now().plusDays(getDays());
        boolean isValid;
        if (currentDate.isAfter(expirationDate)) {
            isValid = false;
        } else {
            isValid = true;
        }
        return isValid;
    }
}
