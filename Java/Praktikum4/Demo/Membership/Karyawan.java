package Java.Praktikum4.Demo.Membership;

public class Karyawan extends Person implements Membership {
    public double DISCOUNT = 0.125;
    public String memberType = "Karyawan";

    public Karyawan(String name) {
        super(name);
    }

    public double getDISCOUNT() {
        return DISCOUNT;
    }

    public String getMemberType() {
        return memberType;
    }
}
