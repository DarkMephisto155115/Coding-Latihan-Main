package Tugas4;

public class Lingkaran {
    private static final double PI = 3.14;

    public static double hitungLuas(double radius) {
        if (radius <= 0) {
            throw new IllegalArgumentException("Radius harus bernilai positif");
        }

        return PI * radius * radius;
    }
}
