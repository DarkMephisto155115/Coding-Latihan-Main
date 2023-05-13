package Java.KelasPBO.tt;

class arrayOfInteger {
    private int arr[];

    public arrayOfInteger(int[] arr) {
        this.arr = arr;
    }

    public void showArray() {
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i] + " ");
        }
    }

    int getElemen(int idx) {
        int a = arr[idx];
        return a;
    }

    public void setElemen(int i, int idx) {

        System.out.println("Dari " + arr[idx]);
        arr[idx] = i;
        System.out.println("Menjadi " + arr[idx]);
    }
}

public class demoArray {
    public static void main(String[] args) {
        int arrNilai[] = { 1, 2, 3, 4, 5, 6 };
        arrayOfInteger objArray = new arrayOfInteger(arrNilai);
        objArray.showArray();
        System.out.println("tampil nilai pada indeks : : " + objArray.getElemen(0));
        System.out.println("\nspasi\n");
        objArray.setElemen(10, 0);
    }
}
