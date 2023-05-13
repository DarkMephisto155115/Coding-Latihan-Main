package Java.Praktikum5.codelab;

public class Armor {
    private int strength;

    public Armor(int strength) {
        this.strength = strength;
    }

    public int getStrength() {
        return strength;
    }

    public void setStrength(int strength) {
        this.strength = strength;
    }

    public void damagedArmor(double damage) {
        double armorDamage = (double) (strength * damage / 100);
        armorDamage = Math.ceil(armorDamage);
        System.out.println("Damage : " + (int) armorDamage);
        strength -= armorDamage;
        if (strength < 0) {
            strength = 0;
        }
    }
}
