#include <iostream>
#include <string>
using namespace std;
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

int main()
{
    string tanggalLahir; // saya gunakan string karena supaya bisa menggunakan format dd/mm/yy (10/04/2004) saat input
    cout << "Masukkan tanggal lahir anda (dd/mm/yyyy): ";
    cin >> tanggalLahir;
    cout << "Tanggal lahir anda adalah: " << tanggalLahir;
    system("pause");
    return 0;
}