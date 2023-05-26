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
            this.healthPoint = (int) (6000 + ((int_random + int_random) * 200));// Min 6000 Max 10000
            this.defense = (int) (400 + (int_random * 20));// Min 400 Max 600
            this.attackDamage = (int) (400 + (int_random * 20));// Min 400 Max 600
            for (int i = 1; i <= level; i++) {
                this.healthPoint += 200;
                this.defense += 15;
                this.attackDamage += 20;
            }

        } else {
            this.healthPoint = (int) (6000 + ((int_random + int_random) * 200));// Min 6000 Max 10000
            this.defense = (int) (400 + (int_random * 20));// Min 400 Max 600
            this.attackDamage = (int) (400 + (int_random * 20));// Min 400 Max 600
        }
    }

    @Override
    public void checkStatus() {
        System.out.println("Class : Tank");
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
        System.out.println("I mean no harm, but you leave me no choices!!!");
    }

    @Override
    public void attackIntro() {
        System.out.println("My sword is used to protect others!!!");

    }

    @Override
    protected int calculateRealDamage() {
        int realDamage = attackDamage;
        System.out.println("Tank attack for " + realDamage);
        return realDamage;
    }

    @Override
    public void reviewDamage(int damage) {
        // TODO Auto-generated method stub
        int realDamage = damage - this.defense;
        if (armor != null && armor.getRealDefensePoint() > 0) {
            armor.reduceRealDefensePoint(realDamage);
            if (armor.getRealDefensePoint() == 0) {
                realDamage = (int) armor.getExcessDamage();
                System.out.println("Armor has been broken and health damaged by " + realDamage);
            } else if (getRealDefensePoint() > 0) {
                System.out.println("Armor depleted by " + realDamage);
                realDamage = 0;
            }

        }

        System.out.println("Recived damage : " + realDamage);
        if (realDamage > 0) {
            healthPoint -= realDamage;
        }
        if (healthPoint <= 0) {
            healthPoint = 0;
            isDefeated = true;
        }
    }

}