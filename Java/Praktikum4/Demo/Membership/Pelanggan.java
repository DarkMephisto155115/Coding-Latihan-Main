package Java.Praktikum4.Demo.Membership;

public class Pelanggan extends Person implements Membership {
    public String memberType;

    public Pelanggan(String name, String memberType) {
        super(name);
        this.memberType = memberType;
    }

    @Override
    public double getMembershipDiscount() {

        if (memberType.equals("Premium")) {
            return PREMIUM_DISC;
        } else if (memberType.equals("Gold")) {
            return GOLD_DISC;
        } else if (memberType.equals("Silver")) {
            return SILVER_DISC;
        } else {
            return 0;
        }
    }

}
