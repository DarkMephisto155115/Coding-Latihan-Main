package Java.Praktikum5.Demo.ClassSystem;

import java.util.Random;

import Java.Praktikum5.Demo.BattleSystem.*;
import Java.Praktikum5.Demo.EquipmentSystem.Armor;
import Java.Praktikum5.Demo.EquipmentSystem.Weapon;

public class GrandAssasin extends Hero implements Armorable, MagicalDamage, CrtiticalDamage, Weaponable {
    Random rand = new Random();
    int int_random = rand.nextInt(11);
    public Weapon w;
    public Armor armor;

    private double attackDamageNotification;

    public GrandAssasin(int level) {
        super(level);
        if (level > 0) {
            this.healthPoint = (int) (2000 + ((rand.nextInt(11) + rand.nextInt(11) + rand.nextInt(11)) * 100));// Min
                                                                                                               // 2000
                                                                                                               // Max
                                                                                                               // 5000
            this.defense = (int) (200 + (rand.nextInt(11) * 30));// Min 200 Max 500
            this.attackDamage = (int) (700 + (rand.nextInt(11) * 50));// Min 700 Max 1200
            for (int i = 1; i <= level; i++) {
                this.healthPoint += 90;
                this.defense += 15;
                this.attackDamage += 30;
            }

        } else {
            this.healthPoint = (int) (2000 + (rand.nextInt(11) * 300));// Min 2000 Max 5000
            this.defense = (int) (200 + (rand.nextInt(11) * 30));// Min 200 Max 500
            this.attackDamage = (int) (700 + (rand.nextInt(11) * 50));// Min 700 Max 1200
        }
        this.attackDamage += (this.attackDamage * ATK_DMG_BONUS);
        this.attackDamage += (this.attackDamage * MAGIC_DMG_BONUS);
    }

    @Override
    public void checkStatus() {
        System.out.println("\nClass : Grand Assasin");
        super.checkStatus();
        if (w != null) {
            w.weaponType();
            System.out.println("Weapon Name : " + w.getName());
            w.elementType();
            System.out.println("Weapon Damage : " + w.getDamage());
            System.out.println("Element Damage : " + w.getElementDamage());
            System.out.println("Total Weapon Damage : " + w.getTotalDamage());
        }
        if (armor != null) {
            System.out.println("Tank is Armored");
            armor.elementType();
            System.out.println("Armor defense : " + armor.getDefensePoint());
            System.out.println("Element defense : " + armor.getElementDefensePoint());
            System.out.println("Total armor defense : " + armor.getRealDefensePoint());
        }
    }

    @Override
    public void useWeapon(Weapon w) {
        this.w = w;
    }

    @Override
    public void useArmor(Armor a) {
        this.armor = a;
    }

    @Override
    public void spawnIntro() {
        System.out.println(
                "\nListen. The evening bell has tolled thy name. The feathers foreshadow your death, and behead.");
    }

    @Override
    public void attackIntro() {
        System.out.println("The evening bell is ringing!!!");

    }

    @Override
    protected double calculateRealDamage() {
        double realDamage = attackDamage;
        if (w != null) {
            if (w.getElementDamage() != 0) {
                realDamage += w.getElementDamage();
            }
            realDamage += w.getDamage();
        }
        this.attackDamageNotification = realDamage;
        return realDamage;
    }

    public double getAttackDamageNotification() {
        return attackDamageNotification;
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

        System.out.println("\n" + player + " attack for " + getAttackDamageNotification() + " Damage\n");
    }

    @Override
    public void reviewDamage(Double damage) {
        double realDamage = damage - this.defense;
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

}
