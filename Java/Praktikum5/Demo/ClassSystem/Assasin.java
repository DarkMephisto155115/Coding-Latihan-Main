package Java.Praktikum5.Demo.ClassSystem;

import java.util.Random;

import Java.Praktikum5.Demo.BattleSystem.CrtiticalDamage;
import Java.Praktikum5.Demo.BattleSystem.Weaponable;

import Java.Praktikum5.Demo.EquipmentSystem.Weapon;

public class Assasin extends Hero implements CrtiticalDamage, Weaponable {
    Random rand = new Random();
    int int_random = rand.nextInt(11);
    public Weapon w;

    public Assasin(int level) {
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
    }

    @Override
    public void checkStatus() {
        System.out.println("\nClass : Assasin");
        super.checkStatus();
        if (w != null) {
            w.weaponType();
            System.out.println("Weapon Name : " + w.getName());
            w.elementType();
            System.out.println("Weapon Damage : " + w.getDamage());
            System.out.println("Element Damage : " + w.getElementDamage());
            System.out.println("Total Weapon Damage : " + w.getTotalDamage());
        }
    }

    @Override
    public void useWeapon(Weapon w) {
        this.w = w;
    }

    @Override
    public void spawnIntro() {
        System.out.println(
                "Listen. The evening bell has tolled thy name. The feathers foreshadow your death, and behead.");
    }

    @Override
    public void attackIntro() {
        System.out.println("The evening bell is ringing!!!");

    }

    @Override
    protected int calculateRealDamage() {
        int realDamage = attackDamage;
        if (w != null) {
            if (w.getElementDamage() != 0) {
                realDamage += w.getElementDamage();
            }
            realDamage += w.getDamage();
        }
        System.out.println("Assasin attack for " + realDamage);
        return realDamage;
    }

}
