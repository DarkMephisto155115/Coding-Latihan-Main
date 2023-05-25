package Java.Praktikum5.Demo.ClassSystem;

import java.util.Random;

import Java.Praktikum5.Demo.BattleSystem.CrtiticalDamage;
import Java.Praktikum5.Demo.BattleSystem.Weaponable;
import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Element;
import Java.Praktikum5.Demo.EquipmentSystem.Weapon;

public class Assasin extends Hero implements CrtiticalDamage, Weaponable {
    Random rand = new Random();
    int int_random = rand.nextInt(11);
    public Weapon w;
    public Element e;

    public Assasin(int level) {
        super(level);
        if (level > 0) {
            this.healthPoint = (int) (2000 + (int_random * 300));// Min 2000 Max 5000
            this.defense = (int) (200 + (int_random * 30));// Min 200 Max 500
            this.attackDamage = (int) (700 + (int_random * 50));// Min 700 Max 1200
            for (int i = 1; i <= level; i++) {
                this.healthPoint += 90;
                this.defense += 15;
                this.attackDamage += 30;
            }

        } else {
            this.healthPoint = (int) (2000 + (int_random * 300));// Min 2000 Max 5000
            this.defense = (int) (200 + (int_random * 30));// Min 200 Max 500
            this.attackDamage = (int) (700 + (int_random * 50));// Min 700 Max 1200
        }
    }

    @Override
    public void useWeapon(Weapon w) {
        this.attackDamage += w.getDamage();
    }

    @Override
    public void spawnIntro() {
        System.out.println("The Evening Bell Is Ringing!!!");
    }

    @Override
    protected int calculateRealDamage() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'calculateRealDamage'");
    }

}
