#include <iostream>

using namespace std;

int main()
{
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << "(42 in decima)\n";
    cout << hex;
    cout << "waist = " << waist << "(hexadecimal for 42)" <<  endl;
    cout << oct;
    cout << "inseam = " << inseam << "(octal for 42)" << endl;
    return 0;
}

