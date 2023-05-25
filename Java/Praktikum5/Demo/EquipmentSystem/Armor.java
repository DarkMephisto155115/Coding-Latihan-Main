package Java.Praktikum5.Demo.EquipmentSystem;

import Java.Praktikum5.Demo.BattleSystem.ElementSystem.Element;

public class Armor {
    private double defensePoint;
    private double realDefensePoint;
    Element element;

    public double getDefensePoint() {
        return defensePoint;
    }

    public double getRealDefensePoint() {
        return realDefensePoint;
    }

    public Armor(double defensePoint, Element e) {
        this.defensePoint = defensePoint;
        this.element = e;
        this.realDefensePoint = this.defensePoint + e.getElementalBonus();

    }

    public Armor(double defensePoint) {
        this.defensePoint = defensePoint;
    }

}
