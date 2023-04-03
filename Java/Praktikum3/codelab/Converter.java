package Java.Praktikum3.codelab;

public class Converter {
    protected double setValueToM(double nilaiYard) {
        double meters = nilaiYard * (double) 0.9144;

        return meters;
    }

    protected double setValueToCM(double nilaiYard) {
        double centiMeters = nilaiYard * (double) 91.44;

        return centiMeters;
    }

    protected double setValueToFeet(double nilaiYard) {
        double feet = nilaiYard * (double) 3;

        return feet;
    }

    protected double setValueToMiles(double nilaiYard) {
        double miles = nilaiYard / (double) 1760;

        return miles;
    }
}
