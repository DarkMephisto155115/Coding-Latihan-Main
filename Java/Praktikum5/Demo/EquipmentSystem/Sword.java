package Java.Praktikum5.Demo.EquipmentSystem;

import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Element;

public class Sword extends Weapon {

    public Sword(String name, Element e, double damage) {
        this.name = name;
        this.element = e;
        this.damage = damage;
        this.elementDamage = e.getAttackBonus();
        this.totalDamage = this.elementDamage + damage;
    }

    public Sword(String name, double damage) {
        this.name = name;
        this.damage = damage;
        this.elementDamage = 0;
        this.totalDamage = this.elementDamage + damage;
    }

    @Override
    public void weaponType() {
        System.out.println("Weapon Type : Sword");
    }

}
