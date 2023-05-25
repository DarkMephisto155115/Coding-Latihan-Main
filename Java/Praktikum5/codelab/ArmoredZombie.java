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
    public void getZombieInfo() {
        System.out.println("------ Zombie Info ------");
        System.out.println("Zombie : Armored Zombie");
        System.out.println("Health : " + getHealth());
        armor.getArmorInfo();
    }

    @Override
    public void attacked() {
        System.out.println("\n------ Plant menyerang Armored Zombie ------");

        if (armor.getStrength() > 0) {
            armor.damagedArmor(2);
            if (armor.getStrength() == 0) {
                health = health + armor.getExcessDamage();
                getZombieInfo();
                System.out
                        .println("\nArmored Zombie armor is depleted by  " + (int) armor.getArmorDamage() + " damage");
                System.out.println("\n------ The armor has been broken!!! ------");
            } else {
                getZombieInfo();
                System.out.println("\nArmored Zombie armor is depleted by " + (int) armor.getArmorDamage() + " damage");
            }

        } else {
            double damage = (health * 0.02);
            damage = Math.ceil(damage);
            health = health - (int) damage;
            getZombieInfo();
            System.out.println("\nArmored Zombie received " + (int) damage + " damage");
        }
    }

    @Override
    public void destroyed() {
        System.out.println("\nPlant berhasil mengalahkan Armored Zombie");
    }
}
