//strtype4.cpp -- line input
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char charr20[20];
	string str;

	cout << "Length of string in charr20 before input: "
		<< strlen(charr20) << endl;
	cout << "Length of string in str before input: "
		<< str.size() << endl;
	cout << "Enter a line of text:\n";
	cin.getline(charr20,20);
	cout << "You entered: " << charr20 << endl;
	cout << "Enter another line of text:\n";
	getline(cin,str);
	cout << "You entered : " << str << endl;
	cout << "Length of string in charr20 after input: "
		<< strlen(charr20) << endl;
	cout << "Length of string in str after input: "
		<<str.size() << endl;

	return 0;
}

