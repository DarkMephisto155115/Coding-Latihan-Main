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

    @Override
    public void getZombieInfo() {
        System.out.println("------ Zombie Info ------");
        System.out.println("Zombie : Walking Zombie");
        System.out.println("Health : " + getHealth());
    }

    public void attacked() {
        System.out.println("\n------ Plant menyerang Walking Zombie ------");
        getZombieInfo();
        double damage = (double) (health * 0.04);
        damage = Math.ceil(damage);
        health = health - (int) damage;
        System.out.println("\nWalking Zombie received " + (int) damage + " damage");
    }

    @Override
    public void destroyed() {
        System.out.println("\nPlant berhasil mengalahkan Walking Zombie");
    }

}
