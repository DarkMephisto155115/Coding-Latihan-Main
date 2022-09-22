#include <iostream>
#include <string>
using namespace std;
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

int main()
{
    string tanggalLahir; // saya gunakan string karena supaya bisa menggunakan format dd/mm/yy (10/04/2004) saat input
    int cekhasil;
    cout << "Masukkan tanggal lahir anda (dd/mm/yyyy): ";
    cin >> tanggalLahir;
    cout << "Tanggal lahir anda adalah: " << tanggalLahir;
    cin >> cekhasil;
    return 0;
}