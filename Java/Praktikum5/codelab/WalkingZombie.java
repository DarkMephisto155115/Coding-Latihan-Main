package Java.Praktikum5.codelab;

public class WalkingZombie extends Zombie {
    public int health;

    public WalkingZombie(int health) {
        super(health);
        this.health = health;
    }

    public int getHealth() {
        return health;
    }

    public void attacked() {
        double damage = (double) (health * 0.04);
        damage = Math.ceil(damage);
        System.out.println("Damage : " + (int) damage);
        health = health - (int) damage;
        System.out.println("Walking Zombie health: " + getHealth());
    }

}
