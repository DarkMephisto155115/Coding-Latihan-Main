#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nilaipertama;
    int nilaikedua;
    int hasil;
    int teshasil;
    cout
        << "Masukkan Perbandingan \n \n";
    cout << "Masukkan nilai Pertama: ";
    cin >> nilaipertama;
    cout << "Masukkan nilai Kedua: ";
    cin >> nilaikedua;
    hasil = nilaipertama < nilaikedua;
    cout << "Hasil dari perbandingan dari nilai pertama dan kedua adalah "
         << hasil; // 0 = false, 1 = true
    cin >> teshasil;
    return 0;
}