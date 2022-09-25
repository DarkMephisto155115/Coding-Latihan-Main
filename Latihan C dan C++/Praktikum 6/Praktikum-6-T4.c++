#include <iostream>
#include <string>
using namespace std;
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)

void myFunction(string country = "Norway"){
    cout << country << endl;
}
int main()
{
    myFunction("Sweden");
    myFunction("India");
    myFunction ();
    myFunction("USA");
    return 0;
}