package Java.Praktikum5.Demo.ClassSystem;

import java.util.Random;

import Java.Praktikum5.Demo.BattleSystem.Armorable;
import Java.Praktikum5.Demo.EquipmentSystem.Armor;

public class Tank extends Hero implements Armorable {
    public Armor armor;
    Random rand = new Random();
    int int_random = rand.nextInt(11);

    public Tank(int level) {
        super(level);
        if (level > 0) {
            this.healthPoint = (int) (6000 + ((rand.nextInt(11)) * 400));// Min 6000 Max 10000
            this.defense = (int) (600 + (rand.nextInt(11) * 30));// Min 600 Max 900
            this.attackDamage = (int) (500 + (rand.nextInt(11) * 20));// Min 500 Max 700
            for (int i = 1; i <= level; i++) {
                this.healthPoint += 200;
                this.defense += 15;
                this.attackDamage += 20;
            }

        } else {
            this.healthPoint = (int) (6000 + ((rand.nextInt(11) + rand.nextInt(11)) * 200));// Min 6000 Max 10000
            this.defense = (int) (600 + ((rand.nextInt(11) + rand.nextInt(11) + rand.nextInt(11)) * 30));// Min 600 Max
                                                                                                         // 900
            this.attackDamage = (int) (500 + (rand.nextInt(11) * 20));// Min 500 Max 700
        }
    }

    @Override
    public void checkStatus() {
        System.out.println("\nClass : Tank");
        super.checkStatus();
        if (armor != null) {
            System.out.println("Tank is Armored");
            armor.elementType();
            System.out.println("Armor defense : " + armor.getDefensePoint());
            System.out.println("Element defense : " + armor.getElementDefensePoint());
            System.out.println("Total armor defense : " + armor.getRealDefensePoint());
        }
    }

    public double getRealDefensePoint() {
        return armor.getRealDefensePoint();
    }

    @Override
    public void useArmor(Armor a) {
        this.armor = a;
    }

    @Override
    public void spawnIntro() {
        System.out.println("\nI mean no harm, but you leave me no choices!!!");
    }

    @Override
    public void attackIntro() {
        System.out.println("My sword is used to protect others!!!");

    }

    @Override
    protected double calculateRealDamage() {
        double realDamage = attackDamage;

        return realDamage;
    }

    @Override
    public void reviewDamage(Double damage) {
        double realDamage = damage;
        if (this.defense < realDamage) {
            realDamage = damage - this.defense;
        }

        if (this.defense > realDamage) {
            realDamage = realDamage * 0.2;
        }
        if (realDamage <= 0) {
            realDamage = 0;
        }
        this.receivedDamage = realDamage;
        if (armor != null && armor.getRealDefensePoint() > 0) {
            armor.reduceRealDefensePoint(realDamage);
            if (armor.getRealDefensePoint() == 0) {
                realDamage = (int) armor.getExcessDamage();

            } else if (armor.getRealDefensePoint() > 0) {

                realDamage = 0;
            }

        }

        if (realDamage > 0) {
            healthPoint -= realDamage;
        }
        if (healthPoint <= 0) {
            healthPoint = 0;
            isDefeated = true;
        }
    }

    @Override
    public void damagedNotification(String player) {
        if (armor != null && armor.getRealDefensePoint() > 0) {
            System.out.println("\n" + "Armor depleted by " + getReceivedDamage());
        } else if (armor != null && armor.getExcessDamage() != 0) {
            System.out.println("\n" + "Armor has been broken and health damaged by " + armor.getExcessDamage());
            armor.setExcessDamage(0);
        } else {
            System.out.println("\n" + player + " Received " + getReceivedDamage() + " Damage");
        }

    }

    @Override
    public void attackNotification(String player) {
        System.out.println(player + " attack for " + this.attackDamage + " Damage\n");
    }

    @Override
    public void checkBattleStat(String player) {
        super.checkBattleStat(player);
        if (armor != null) {
            System.out.println(player + " Defense : " + armor.getRealDefensePoint());
        }

    }

}
