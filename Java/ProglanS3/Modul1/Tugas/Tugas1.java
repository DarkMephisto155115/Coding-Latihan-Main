
public class Tugas1 {
    public static void main(String[] args) {
        int[] numbers = { 10, 20, 30, 40, 50 };
        int sum = 0;
        // Terjadi error index out of bound karena looping melebihi jumlah index yang
        // ada dalam array
        // Dapat diperbaiki dengan dikurangi satu panjang array saat melakukan looping
        for (int i = 0; i <= numbers.length - 1; i++) {
            sum += numbers[i];
        }

        double average = sum / numbers.length;
        System.out.println("Rata-rata : " + average);
    }
}
