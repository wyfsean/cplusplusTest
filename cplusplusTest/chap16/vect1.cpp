//vect1.cpp -- introducing the vector template
#include <iostream>
#include <vector>
#include <string>

const int NUM = 5;

int main()
{
	using std::vector;
	using std::string;
	using std::cin;
	using std::cout;

	vector<int> ratings(NUM);
	vector<string> titles(NUM);
	cout << "You will do exactly as told. You will enter\n"
		<< NUM << " book titles and your tatings (0-10).\n";
	int i;
	for (i = 0; i < NUM; i++)
	{
		cout << "Enter title #" << i + 1 << ": ";
		getline(cin,titles[i]);
		cout << "Enter your rating (0-10): ";
		cin >> ratings[i];
		cin.get();
	}

	cout << "Thank you. You entered the following:\n"
		<< "Rating\tbook\n";

	for (i = 0; i < NUM; i++)
	{
		cout << ratings[i] << "\t" << titles[i] << std::endl;
	}

	return 0;
}
