
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

    public void setJumlahSuku(int jumlahSuku) {
        this.jumlahSuku = jumlahSuku;
        this.deretInteger = new int[jumlahSuku];
    }

    public int getJumlahSuku() {
        return jumlahSuku;
    }

    public void setDeretInteger(int[] deretInteger) {
        this.deretInteger = deretInteger;
    }

    public int[] getDeretInteger() {
        return deretInteger;
    }

    public DeretInteger(int jumlahSuku) {
        this.jumlahSuku = jumlahSuku;
    }

    public void input() {
        Scanner sc = new Scanner(System.in);
        int[] deretInt = new int[getJumlahSuku()];
        for (int i = 0; i < getJumlahSuku(); i++) {
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
                } catch (Exception e) {
                    System.out.println(e.getClass());
                    System.out.println(e.getMessage());
                }
            }

        }

        setDeretInteger(deretInt);
        sc.close();
    }

    public void sortAscending() {
        try {
            Arrays.sort(getDeretInteger());
            System.out.println("\nDisplay angka dari terkecil ke terbesar : ");
            displayInteger(getDeretInteger());
        } catch (Exception e) {
            System.out.println(e.getClass());
            System.out.println(e.getMessage());
        }

    }

    public void sortDescending() {
        Integer[] deretInt = new Integer[getDeretInteger().length];
        int i = 0;
        try {
            for (int value : deretInteger) {
                deretInt[i++] = Integer.valueOf(value);
            }
            Arrays.sort(deretInt, Collections.reverseOrder());
            System.out.println("\nDisplay angka dari terbesar ke terkecil : ");
            displayInteger(deretInt);
        } catch (Exception e) {
            System.out.println(e.getClass());
            System.out.println(e.getMessage());
        }

    }

    public int getMax() {
        int max = getDeretInteger()[0];
        try {
            for (int i = 1; i < this.deretInteger.length; i++) {
                if (max < getDeretInteger()[i]) {
                    max = getDeretInteger()[i];
                }
            }
        } catch (Exception e) {
            System.out.println(e.getClass());
            System.out.println(e.getMessage());
        }

        return max;
    }

    public int getMin() {
        int min = getDeretInteger()[0];
        try {
            for (int i = 1; i < getDeretInteger().length; i++) {
                if (min > getDeretInteger()[i]) {
                    min = getDeretInteger()[i];
                }
            }

        } catch (Exception e) {
            System.out.println(e.getClass());
            System.out.println(e.getMessage());
        }
        return min;
    }

    public void displayInteger(int[] deretInt) {
        try {
            for (int i = 0; i < deretInt.length; i++) {
                if (i == deretInt.length - 1) {
                    System.out.print(deretInt[i] + ".");
                } else {
                    System.out.print(deretInt[i] + ", ");
                }

            }
            System.out.println("");
        } catch (Exception e) {
            System.out.println(e.getClass());
            System.out.println(e.getMessage());
        }

    }

    public void displayInteger(Integer[] deretInt) {
        try {
            for (int i = 0; i < deretInt.length; i++) {
                if (i == deretInt.length - 1) {
                    System.out.print(deretInt[i] + ".");
                } else {
                    System.out.print(deretInt[i] + ", ");
                }

            }
            System.out.println("");
        } catch (Exception e) {
            System.out.println(e.getClass());
            System.out.println(e.getMessage());
        }

    }
}
