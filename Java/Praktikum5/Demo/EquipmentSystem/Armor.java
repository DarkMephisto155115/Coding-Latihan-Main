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

    public void setExcessDamage(double excessDamage) {
        this.excessDamage = excessDamage;
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

    // Static Polymorphism (Polimorfisme statis)

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

    public void elementType() {// Polymorphic Arguments
        if (this.element instanceof Fire) {
            System.out.println("Element : Fire");
        } else if (this.element instanceof Water) {
            System.out.println("Element : Water");
        } else if (this.element instanceof Earth) {
            System.out.println("Element : Earth");
        } else if (this.element instanceof Wind) {
            System.out.println("Element : Wind");
        } else if (this.element instanceof Imaginary) {
            System.out.println("Element : Imaginary");
        } else {
            System.out.println("Element : -");
        }
    }

}
