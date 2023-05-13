package Java.testing;

public class Weapon {
    private String name;
    private int damage;

    // Constructor
    public Weapon(String name, int damage) {
        this.name = name;
        this.damage = damage;
    }

    // Getters and setters
    public String getName() {
        return name;
    }

    public int getDamage() {
        return damage;
    }
}