import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int saldo = 1_000_000;
        int ambil;

        try {
            System.out.print("Masukkan yang ingin diambil : ");
            ambil = sc.nextInt();
            if (ambil > saldo) {
                throw new Exception("tidak boleh lebih dari saldo!!!");
            } else {
                saldo -= ambil;
            }

        } catch (Exception e) {
            System.out.println(e.getMessage());
            System.out.println("Saldo tidak dikurangi karena error");
        } finally {
            System.out.println("Sisa saldo " + saldo);
            sc.close();
        }

    }
}
