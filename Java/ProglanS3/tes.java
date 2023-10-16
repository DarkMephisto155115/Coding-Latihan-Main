package Java.ProglanS3;

import java.text.DecimalFormat;

public class tes {
    public static void main(String[] args) {
        DecimalFormat df = new DecimalFormat("#.######");
        double x = -1.5;
        double y = -1.5;
        double hasil = 0;
        double total = 0;
        char[] huruf = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
        for (int i = 1; i < 11; i++) {
            if (i % 2 == 0) {
                x += 0.402;
                hasil = kalkulasi(x);
                System.out.println(huruf[i - 1] + ". " + df.format(x) + " = " + df.format(hasil));
                System.out.println("Luas batang = " + df.format((x * hasil)));
                total += (x * hasil);
            } else {
                y -= 0.402;
                hasil = kalkulasi(y);
                System.out.println(huruf[i - 1] + ". " + df.format(y) + " = " + df.format(hasil));
                System.out.println("Luas batang = " + df.format((y * hasil)));
                total += (y * hasil);
            }
        }

        System.out.println("Total Luas : " + df.format(total));
        System.out.println(df.format(total - 9.8));
    }

    public static double kalkulasi(double x) {
        return ((x * x)) + 3 * (x) - 4;
    }
}
