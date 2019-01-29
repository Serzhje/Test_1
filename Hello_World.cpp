#include <iostream>
#include <locale>

using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Hello World" << "\n";
	cout << "Привет МИр!" << "\n";

	cin.get();
	return;
}