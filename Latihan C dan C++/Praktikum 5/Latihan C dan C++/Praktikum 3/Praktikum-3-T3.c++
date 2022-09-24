#include <iostream>
#include <string>
using namespace std;
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

int main()
{

    int nilai;
    int cekhasil;
    cout << "Masukkan Nilai Anda: ";
    cin >> nilai;
    if (nilai >= 75)
    {
        cout << "Anda lulus dengan nilai " << nilai << endl;
    }
    else if (nilai >= 60)
    {
        cout << "Anda mengikuti remedial " << endl;
    }
    else
    {
        cout << "Anda mengulang di semester depan!!!" << endl;
    }

    cin >> cekhasil;
    return 0;
}