package Java.Praktikum5.Demo.EquipmentSystem;

import Java.Praktikum5.Demo.BattleSystem.ElementSystem.*;

public class Armor {
    private double defensePoint;
    private double realDefensePoint;
    private double elementDefensePoint;
    private double excessDamage = 0;
    Element element;

    public double getExcessDamage() {
        return excessDamage;
    }

    public double getDefensePoint() {
        return defensePoint;
    }

    public double getRealDefensePoint() {
        return realDefensePoint;
    }

    public double getElementDefensePoint() {
        return elementDefensePoint;
    }

    public Armor(double defensePoint, Element e) {
        this.defensePoint = defensePoint;
        this.element = e;
        this.elementDefensePoint = e.getDefenseBonus();
        this.realDefensePoint = this.defensePoint + e.getDefenseBonus();

    }

    public Armor(double defensePoint) {
        this.defensePoint = defensePoint;
        this.realDefensePoint = this.defensePoint + 0;
    }

    public void reduceRealDefensePoint(double damage) {
        this.realDefensePoint -= damage;
        if (this.realDefensePoint < 0) {
            this.excessDamage -= realDefensePoint;
            this.realDefensePoint = 0;
        }
    }

    public void elementType() {
        if (element instanceof Fire) {
            System.out.println("Armor element : Fire");
        } else if (element instanceof Water) {
            System.out.println("Armor element : Water");
        } else if (element instanceof Earth) {
            System.out.println("Armor element : Earth");
        } else if (element instanceof Wind) {
            System.out.println("Armor element : Wind");
        } else {
            System.out.println("Armor element : -");
        }
    }

}
