package Java.Praktikum4.Demo.Membership;

public interface Membership {
    public double PREMIUM_DISC = 0.1;
    public double GOLD_DISC = 0.075;
    public double SILVER_DISC = 0.05;

    public default double getMembershipDiscount() {
        return 0;
    }
}
