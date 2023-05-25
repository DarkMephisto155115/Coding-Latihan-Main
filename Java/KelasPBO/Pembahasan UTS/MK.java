public class MK {
    String[][] mkmhs;

    public MK(String[][] mkmhs) {
        this.mkmhs = mkmhs;
    }

    public void tampil() {
        for (int i = 0; i < mkmhs.length; i++) {
            System.out.println("Nama Mahasiswa : " + mkmhs[i][0] + "\nNilai : " + mkmhs[i][1] + "\n");
        }
    }

    public void konversi() {
        for (int i = 0; i < mkmhs.length; i++) {
            if (mkmhs[i][1].equals("A")) {
                this.mkmhs[i][1] = "4.0";
            } else if (mkmhs[i][1].equals("B+")) {
                this.mkmhs[i][1] = "3.5";
            } else if (mkmhs[i][1].equals("B")) {
                this.mkmhs[i][1] = "3.0";
            } else if (mkmhs[i][1].equals("C+")) {
                this.mkmhs[i][1] = "2.5";
            } else if (mkmhs[i][1].equals("C")) {
                this.mkmhs[i][1] = "2.0";
            } else if (mkmhs[i][1].equals("D+")) {
                this.mkmhs[i][1] = "1.5";
            } else if (mkmhs[i][1].equals("D")) {
                this.mkmhs[i][1] = "1.0";
            } else if (mkmhs[i][1].equals("E+")) {
                this.mkmhs[i][1] = "0.5";
            } else if (mkmhs[i][1].equals("E")) {
                this.mkmhs[i][1] = "0.0";
            }
        }
    }

    public static void main(String[] args) {
        String[][] mkmhs = { { "Agus", "B" }, { "Andi", "B+" }, { "Udin", "A" }, { "Iwan", "C" }, { "Andre", "C+" },
                { "Bagus", "D" } };
        MK mk = new MK(mkmhs);
        System.out.println("Nilai Mahasiswa Sebelum konversi \n");
        mk.tampil();
        System.out.println("Nilai Mahasiswa Sesudah konversi \n");
        mk.konversi();
        mk.tampil();
    }
}
