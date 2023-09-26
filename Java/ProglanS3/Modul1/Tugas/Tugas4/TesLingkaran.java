package Tugas4;

import org.junit.*;

public class TesLingkaran {
    private void assertEquals(double expectedLuas, double actualLuas) {
    }

    @Test
    public void testHitungLuasRadiusPositif() {
        double radius = 3.0;
        double expectedLuas = 3.14 * radius * radius;
        double actualLuas = Lingkaran.hitungLuas(radius);
        assertEquals(expectedLuas, actualLuas);

    }

    @Test(expected = IllegalArgumentException.class)
    public void testHitungLuasDenganRadiusNegatif() {
        double radius = -5.0;
        Lingkaran.hitungLuas(radius); // Harus melempar IllegalArgumentException
    }

    @Test(expected = IllegalArgumentException.class)
    public void testHitungLuasDenganRadiusNol() {
        double radius = 0.0;
        Lingkaran.hitungLuas(radius);
        // Harus melempar IllegalArgumentException
    }
}
