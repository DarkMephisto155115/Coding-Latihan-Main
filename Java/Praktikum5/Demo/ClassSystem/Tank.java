package Java.Praktikum5.Demo.ClassSystem;

import Java.Praktikum5.Demo.BattleSystem.Armorable;
import Java.Praktikum5.codelab.Armor;

public class Tank extends Hero implements Armorable {
    public Tank(int level) {
        super(level);
        // TODO Auto-generated constructor stub
    }

    Armor armor;

    @Override
    public void useArmor(Armor a) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'useArmor'");
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
