#include <iostream>
#include <string>

using namespace std;

int main()
{
    char grade;
    int cekhasil;
    cin >> grade;
    switch (grade)
    {
    case 'A': // apabila bukan angka maka harus menggunakan ("") atau('')
        cout << "Sangat Baik" << endl;
        break;
    case 'B':
        cout << "Baik" << endl;
        break;
    case 'C':
        cout << "Rata-rata" << endl;
        break;
    case 'D':
        cout << "Rendah" << endl;
        break;
    case 'E':
        cout << "Sangat rendah" << endl;
        break;
    case 'F':
        cout << "Gagal" << endl;
        break;
    default:
        cout << "Nilai tidak ada" << endl;
        break;
    }
    cout << "Nilai anda adalah " << grade << endl;
    cin >> cekhasil;
    return 0;
}