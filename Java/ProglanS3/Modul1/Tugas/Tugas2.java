import java.util.Scanner;

public class Tugas2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("Masukkan daftar angka yang dipisahkan dengan spasi : ");
            String inputanInt = sc.nextLine();
            String[] inputanStrArr = inputanInt.split(" ");

            if (inputanStrArr.length == 0) {
                throw new IllegalArgumentException(
                        "Kesalahan tidak ada angka yang dimasukkan, harap memasukkan angka yang valid dan tidak ada yang");
            }

            double total = 0;
            double banyakInputan = inputanStrArr.length;
            for (int i = 0; i < banyakInputan; i++) {
                String str = inputanStrArr[i];
                double angka = Double.parseDouble(str);
                total += angka;
            }

            double rataRata = total / banyakInputan;
            System.out.println("Rata-rata: " + rataRata);

        } catch (NumberFormatException e) {
            System.out.println("Error: Kesalahan format yang dimasukkan, pastikan anda memasukkan angka yang valid");
        } catch (ArithmeticException e) {
            System.out.println(
                    "Error : Kesalahan pembagian dengan nol, pastikan tidak ada angka nol agar dapat menghitung rata-rata");
        } catch (Exception e) {
            System.out.println("Error : " + e.getMessage());
        } finally {
            sc.close();
        }
    }
}