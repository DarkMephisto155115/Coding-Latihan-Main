#include <iostream>
#include <string>

using namespace std;

int main(){

    int x;
    int y;
    int cekhasil;
    cout << "Masukkan nilai UAS mu \n";
    cin >> x;
    cout << "Masukkan nilai TOEFL mu \n";
    cin >> y;
    if (x>75, y>700)
    {
        cout << "Selamat Kamu Lulus \n";
    } else if (x>75, y<700)
    {
        cout << "Perbaiki Nilai TOEFL mu \n";
    } else if (x<75, y>700){
        cout << "Perbaiki Nilai UAS ,u \n";
    } else{
        cout << "Kamu GAGAL dek GET REKT!!! \n";
    }
    cin >> cekhasil;
    return 0;
}