package Java.Praktikum5.Demo.ClassSystem;

import Java.Praktikum5.Demo.EquipmentSystem.Weapon;

public abstract class Hero {
    protected int healthPoint;
    protected int attackDamage;
    protected int defense;
    protected int level;
    protected boolean isDefeated;

    public Hero(int level) {
        this.level = level;
        this.isDefeated = false;
    }

    public abstract void spawnIntro();

    public void attack(Hero target) {
        target.reviewDamage(calculateRealDamage());
    }

    public void reviewDamage(int damage) {
        int realDamage = damage - defense;
        if (realDamage > 0) {
            healthPoint -= realDamage;
        }
        if (healthPoint <= 0) {
            healthPoint = 0;
            isDefeated = true;
        }
    }

    public void checkStatus() {
        System.out.println("Health Point: " + healthPoint);
        System.out.println("Attack Damage: " + attackDamage);
        System.out.println("Defense: " + defense);
        System.out.println("Level: " + level);
        System.out.println("Life Status: " + (isDefeated ? "Defeated" : "Alive"));
    }

    protected abstract int calculateRealDamage();

}
