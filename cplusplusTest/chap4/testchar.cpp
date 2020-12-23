#include <iostream>
using namespace std;

int main()
{
	wchar_t title[] = L"Chief Astrogator";
	char16_t name[] = u"Felonia Ripova";
	char32_t car[] = U"Humber Super Snipe";
	char shirt = 'S';
	char a[] = "S";

	cout <<"\"S\" is" <<  a << endl;
	cout << "\'S\' is" <<  shirt << endl;
	cout.put(shirt);
	cout <<"title is " << title << endl;
	wcout <<"w title is " << title << endl;

	wcout << " name is " <<  name << endl;
	wcout << "car is " << car << endl;

	cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << '\n';

	cout << R"+*("(Who wouldn't?)", she whispered.)+*" << endl;

	return 0;
}
