#include <iostream>
#include <string>
using namespace std;
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)




int main()
{
     //Latihan 3
    long long int gaji_pegawai;
    long long int bonus ;
    long long int total_gaji_bonus;
    cout << "Masukkan gaji! \n";
    cin >> gaji_pegawai;
    bonus = gaji_pegawai * 20/100;
    total_gaji_bonus = gaji_pegawai + bonus;
    cout << "Total gaji dan bonus \n";
    cout << "Gaji pegawai: " << gaji_pegawai << endl;
    cout << "Bonus: " <<bonus<< endl;
    cout << "Total gaji dan bonus: "<< total_gaji_bonus<< endl;
    system("Pause");
    return 0;
}