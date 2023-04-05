package Java.KelasPBO.Tugas;

public class DemoString {
    private String kata;
    private String kataRev;
    public void setKata(String kata) {
        this.kata = kata;
    }
    public String getKata() {
        return kata;
    }

    public DemoString(String kata){
        setKata(kata);
    }

    public void validJumlahHuruf(){
        System.out.println(kata.length());
    }

    public void ValidBalikHuruf(){
        kataRev = new StringBuilder(kata).reverse().toString();
        char[] kataRev2 = kata.toCharArray();
        int awal=0;
        int akhir=kataRev2.length-1;
        char kantungDoraemon;
        while(akhir>awal){
            kantungDoraemon = kataRev2[awal];
            kataRev2[awal]=kataRev2[akhir];
            kataRev2[akhir] = kantungDoraemon;
            akhir--;
            awal++;
        }
        String tes= "";
        int jumlah = kata.length()-1;
        for (int i = jumlah; i >= 0; i--){
            tes = tes + kata.charAt(i);
        }
        System.out.println("Cara 1 : ");
        System.out.println(tes);
        System.out.println("Cara 2 : ");
        System.out.println(new String(kataRev2));
        System.out.println("Cara 3 : ");
        System.out.println(kataRev);
    }

    public void cariKarakter(char x){
        if(kata.indexOf(x) != -1){
            System.out.println("Ketemu --> "+ ""+ kata.indexOf(x));
        }else{
            System.out.println(""+ x+"--> Tidak Ketemu");
        }



    }

    public void hurufKapital(){
        var hasil = "";
        String temp = "";
        for(int i = 0; i < kata.length(); i++){
            temp = "";
        if (i % 2 != 0) {
            temp += kata.charAt(i);
            temp = temp.toUpperCase();
            hasil += temp;
        }
        else {
            temp += kata.charAt(i);
            temp = temp.toLowerCase();
            hasil += temp;
        }
    }
    System.out.println(hasil);
    }


}
