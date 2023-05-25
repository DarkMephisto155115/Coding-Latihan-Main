package Java.Praktikum5.Demo.EquipmentSystem;

import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Element;

public abstract class Weapon {
    protected String name;
    protected double damage;
    protected Element element;

    public double getDamage() {
        return damage;
    }
}
