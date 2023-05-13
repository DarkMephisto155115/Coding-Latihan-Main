package Java.Praktikum5.codelab;

public class ArmoredZombie extends Zombie {
    private int health;
    private Armor armor;

    public ArmoredZombie(int health, int armorStrength) {
        super(health);
        this.health = health;
        armor = new Armor(armorStrength);
    }

    public int getHealth() {
        return health;
    }

    public Armor getArmor() {
        return armor;
    }

    public void setArmor(Armor armor) {
        this.armor = armor;
    }

    @Override
    public void attacked() {
        if (armor.getStrength() > 0) {
            armor.damagedArmor(5);
            System.out.println("Armored Zombie armor strength: " + armor.getStrength());
        } else {
            double damage = (health * 0.02);
            damage = Math.ceil(damage);
            System.out.println("Damage : " + (int) damage);
            health = health - (int) damage;
            System.out.println("Armored Zombie health: " + getHealth());
        }
    }

    @Override
    public void destroyed() {
        System.out.println("Armored Zombie is destroyed!");
    }
}
