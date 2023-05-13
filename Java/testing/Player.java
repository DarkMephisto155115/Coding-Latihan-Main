package Java.testing;

public class Player {
    private String name;
    private int level;
    private int health;
    private int damage;
    private int defense;
    private Weapon weapon;
    private Armor armor;

    // Constructor
    public Player(String name, int level, int health, int damage, int defense, Weapon weapon, Armor armor) {
        this.name = name;
        this.level = level;
        this.health = health;
        this.damage = damage;
        this.defense = defense;
        this.weapon = weapon;
        this.armor = armor;
    }

    // Getters and setters
    public String getName() {
        return name;
    }

    public int getLevel() {
        return level;
    }

    public int getHealth() {
        return health;
    }

    public void setHealth(int health) {
        this.health = health;
    }

    public int getDamage() {
        return damage + weapon.getDamage();
    }

    public int getDefense() {
        return defense + armor.getDefense();
    }

    public Weapon getWeapon() {
        return weapon;
    }

    public void setWeapon(Weapon weapon) {
        this.weapon = weapon;
    }

    public Armor getArmor() {
        return armor;
    }

    public void setArmor(Armor armor) {
        this.armor = armor;
    }

    public void setLevel(int i) {
    }
}
