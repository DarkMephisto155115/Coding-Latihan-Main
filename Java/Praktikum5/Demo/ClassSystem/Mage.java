package Java.Praktikum5.Demo.ClassSystem;

import Java.Praktikum5.Demo.BattleSystem.MagicalDamage;

public class Mage extends Hero implements MagicalDamage {

    public Mage(int level) {
        super(level);
        // TODO Auto-generated constructor stub
    }

    @Override
    public void spawnIntro() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'spawnIntro'");
    }

    @Override
    protected int calculateRealDamage() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'calculateRealDamage'");
    }

}
