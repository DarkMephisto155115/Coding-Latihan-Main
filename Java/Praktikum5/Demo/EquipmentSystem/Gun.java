package Java.Praktikum5.Demo.EquipmentSystem;

import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Element;

public class Gun extends Weapon {

    public Gun(String name, Element e, double damage) {
        this.name = name;
        this.element = e;
        this.damage = damage + e.getElementalBonus();
    }

    public Gun(String name, double damage) {
        this.name = name;
        this.damage = damage;
    }

}
