
import java.util.Arrays;
import java.util.Collections;
import java.util.InputMismatchException;
import java.util.Scanner;
import java.lang.Exception;

class NegativeNumberException extends Exception {

    public NegativeNumberException(String message) {
        super(message);
    }

}

class FormatNumberException extends Exception {

    public FormatNumberException(String message) {
        super(message);
    }

}

class ZeroNumberException extends Exception {

    public ZeroNumberException(String message) {
        super(message);
    }

}

public class DeretInteger {
    private int jumlahSuku;
    private int[] deretInteger;

    public DeretInteger(int jumlahSuku) {
        this.jumlahSuku = jumlahSuku;
    }

    public void input() {
        Scanner sc = new Scanner(System.in);
        int[] deretInt = new int[this.jumlahSuku];
        for (int i = 0; i < jumlahSuku; i++) {
            while (true) {
                try {
                    int input = 0;
                    System.out.print("\nMasukkan integer ke-" + (i + 1) + " : ");

                    input = Integer.parseInt(sc.nextLine());
                    if (input < 0) {
                        throw new NegativeNumberException(" Integer tidak boleh negatif !!!");
                    }
                    if (input == 0) {
                        throw new ZeroNumberException(" Integer tidak boleh 0 !!!");
                    }

                    deretInt[i] = input;
                    break;
                } catch (NegativeNumberException e) {
                    System.out.println("\nWaduh : " + e.getMessage());
                } catch (ZeroNumberException e) {
                    System.out.println("\nWaduh : " + e.getMessage());
                } catch (InputMismatchException | NumberFormatException e) {
                    System.out.println("\nWaduh : Input harus Integer !!!");
                }
            }

        }

        this.deretInteger = deretInt;
        sc.close();
    }

    public void sortAscending() {
        Arrays.sort(this.deretInteger);
        System.out.println("\nDisplay angka dari terkecil ke terbesar : ");
        displayInteger(this.deretInteger);
    }

    public void sortDescending() {
        Integer[] deretInt = new Integer[deretInteger.length];
        int i = 0;
        for (int value : deretInteger) {
            deretInt[i++] = Integer.valueOf(value);
        }
        Arrays.sort(deretInt, Collections.reverseOrder());
        System.out.println("\nDisplay angka dari terbesar ke terkecil : ");
        displayInteger(deretInt);
    }

    public int getMax() {
        int max = this.deretInteger[0];
        for (int i = 1; i < this.deretInteger.length; i++) {
            if (max < this.deretInteger[i]) {
                max = this.deretInteger[i];
            }
        }

        return max;
    }

    public int getMin() {
        int min = this.deretInteger[0];
        for (int i = 1; i < this.deretInteger.length; i++) {
            if (min > this.deretInteger[i]) {
                min = this.deretInteger[i];
            }
        }

        return min;
    }

    public void displayInteger(int[] deretInt) {

        for (int i = 0; i < deretInt.length; i++) {
            if (i == deretInt.length - 1) {
                System.out.print(deretInt[i] + ".");
            } else {
                System.out.print(deretInt[i] + ", ");
            }

        }
        System.out.println("");
    }

    public void displayInteger(Integer[] deretInt) {

        for (int i = 0; i < deretInt.length; i++) {
            if (i == deretInt.length - 1) {
                System.out.print(deretInt[i] + ".");
            } else {
                System.out.print(deretInt[i] + ", ");
            }

        }
        System.out.println("");
    }
}
