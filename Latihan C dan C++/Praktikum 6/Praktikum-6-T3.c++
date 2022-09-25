#include <iostream>
#include <string>
using namespace std;
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

void myFunction(string   fname){
    cout << fname << " Refsnes \n";
}
int main()
{
    myFunction(to_string ('Azka'));
    myFunction(to_string (1987));
    myFunction("Alif");
    //Bisa juga tinggal dikasih "" 
    myFunction("Azka");
    myFunction("1987");
    myFunction("Alif");
    return 0;
}