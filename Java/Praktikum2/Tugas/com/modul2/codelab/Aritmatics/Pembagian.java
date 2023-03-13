package Tugas.com.modul2.codelab.Aritmatics;

import Tugas.com.modul2.codelab.*;

public class Pembagian extends Operator {
    @Override
    public double operation(double a, double b) {
        return (a / b);
    }

    @Override
    public double operation(double a, double b, double c) {
        return (a / b / c);
    }
}
