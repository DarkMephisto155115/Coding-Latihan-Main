package Java.Praktikum5.Demo.ClassSystem;

public abstract class Hero {
    protected double healthPoint;
    protected double attackDamage;
    protected double defense;
    protected int level;
    protected boolean isDefeated;

    protected double receivedDamage;
    protected double attackDamageNotification;

    public Hero(int level) {
        this.level = level;
        this.isDefeated = false;
    }

    public abstract void spawnIntro();

    public abstract void attackIntro();

    public abstract void attackNotification(String player);

    public abstract void damagedNotification(String player);

    public void attack(Hero target) {
        target.reviewDamage(calculateRealDamage());
    }

    public void reviewDamage(Double damage) {
        double realDamage = damage - defense;

        if (realDamage <= 0) {
            realDamage = 0;
        }
        setReceivedDamage(realDamage);
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

    public boolean lifeStatus() {
        if (this.isDefeated == true) {
            return false;
        } else {
            return true;
        }
    }

    public void checkBattleStat(String player) {
        System.out.println(player + " HP : " + getHealthPoint());
    }

    protected abstract double calculateRealDamage();

    public double getHealthPoint() {
        return healthPoint;
    }

    public double getReceivedDamage() {
        return receivedDamage;
    }

    public void setAttackDamageNotification(double attackDamageNotification) {
        this.attackDamageNotification = attackDamageNotification;
    }

    public double getAttackDamageNotification() {
        return attackDamageNotification;
    }

    public void setReceivedDamage(double receivedDamage) {
        this.receivedDamage = receivedDamage;
    }
}
