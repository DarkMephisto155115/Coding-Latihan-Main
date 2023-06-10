import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {
    private int input;

    public void setInput(int input) {
        this.input = input;
    }

    public int getInput() {
        return input;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Main main = new Main();

        while (true) {
            try {
                int input = 0;
                System.out.print("\nMasukkan jumlah suku : ");
                input = Integer.parseInt(sc.nextLine());
                if (input < 0) {
                    throw new NegativeNumberException(" Integer tidak boleh negatif !!!");
                }
                if (input == 0) {
                    throw new ZeroNumberException(" Integer tidak boleh 0 !!!");
                }

                main.setInput(input);
                break;
            } catch (NegativeNumberException e) {
                System.out.println("\nWaduh : " + e.getMessage());
            } catch (ZeroNumberException e) {
                System.out.println("\nWaduh : " + e.getMessage());
            } catch (InputMismatchException | NumberFormatException e) {
                System.out.println("\nWaduh : Input harus Integer !!!");
            }
        }

        DeretInteger dInteger = new DeretInteger(main.getInput());
        dInteger.input();
        dInteger.sortAscending();
        dInteger.sortDescending();

        System.out.println("\nNilai Min : " + dInteger.getMin());
        System.out.println("Nilai Max : " + dInteger.getMax());

        sc.close();
    }
}
