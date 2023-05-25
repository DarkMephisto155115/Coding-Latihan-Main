package Java.Praktikum5.codelab;

public class Armor {
    private int strength;
    private int excessDamage;
    private double armorDamage;

    public Armor(int strength) {
        this.strength = strength;
    }

    public double getArmorDamage() {
        return armorDamage;
    }

    public void setArmorDamage(double armorDamage) {
        this.armorDamage = armorDamage;
    }

    public int getExcessDamage() {
        return excessDamage;
    }

    public int getStrength() {
        return strength;
    }

    public void setStrength(int strength) {
        this.strength = strength;
    }

    public void damagedArmor(double damage) {
        double armorDamage = Math.ceil((double) (strength * damage / 100));
        setArmorDamage(armorDamage);
        strength -= armorDamage;
        if (strength < 0) {
            excessDamage = strength;
            strength = 0;
        }
    }

    public void getArmorInfo() {
        System.out.println("Armor Strength : " + strength);
    }
}
