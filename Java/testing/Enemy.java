package Java.testing;

public class Enemy {
    private String name;
    private int health;
    private int damage;
    private int defense;

    // Constructor
    public Enemy(String name, int health, int damage, int defense) {
        this.name = name;
        this.health = health;
        this.damage = damage;
        this.defense = defense;
    }

    // Getters and setters
    public String getName() {
        return name;
    }

    public int getHealth() {
        return health;
    }

    public void setHealth(int health) {
        this.health = health;
    }

    public int getDamage() {
        return damage;
    }

    public int getDefense() {
        return defense;
    }
}