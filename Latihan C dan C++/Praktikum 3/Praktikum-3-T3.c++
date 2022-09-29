#include <iostream>
#include <string>

using namespace std;

int main()
{

    int nilai;
    
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

    system("pause");
    return 0;
}