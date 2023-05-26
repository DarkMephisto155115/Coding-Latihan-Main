package Java.Praktikum5.Demo.ClassSystem;

import java.util.Random;

import Java.Praktikum5.Demo.BattleSystem.MagicalDamage;

public class Mage extends Hero implements MagicalDamage {
    Random rand = new Random();
    int int_random = rand.nextInt(11);

    public Mage(int level) {
        super(level);
        if (level > 0) {
            this.healthPoint = (int) (2000 + ((rand.nextInt(11) + rand.nextInt(11)) * 100));// Min 2000 Max 4000
            this.defense = (int) (300 + ((rand.nextInt(11) + rand.nextInt(11)) * 10));// Min 300 Max 400
            this.attackDamage = (int) (700 + (rand.nextInt(11) * 20));// Min 700 Max 900
            for (int i = 1; i <= level; i++) {
                this.healthPoint += 85;
                this.defense += 10;
                this.attackDamage += 35;
            }

        } else {
            this.healthPoint = (int) (2000 + ((rand.nextInt(11) + rand.nextInt(11)) * 100));// Min 2000 Max 4000
            this.defense = (int) (300 + ((rand.nextInt(11) + rand.nextInt(11)) * 10));// Min 300 Max 400
            this.attackDamage = (int) (700 + (rand.nextInt(11) * 20));// Min 700 Max 900
        }
        this.attackDamage += (this.attackDamage * MAGIC_DMG_BONUS);
    }

    @Override
    public void checkStatus() {
        System.out.println("\nClass : Mage");
        super.checkStatus();
    }

    @Override
    public void spawnIntro() {
        System.out.println("Let me teach you the final Magecraft of the Grand Caster");
    }

    @Override
    public void attackIntro() {
        System.out.println("Feel the wrath of my magic!!!");
    }

    @Override
    protected int calculateRealDamage() {
        int realDamage = attackDamage;
        return realDamage;
    }

}
