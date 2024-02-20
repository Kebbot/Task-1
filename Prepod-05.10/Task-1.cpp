#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int seconds, minutes, hours;
	cout << "Введите секунды: ";
	cin >> seconds;
	minutes = seconds / 60;
	seconds = seconds % 60;
	hours = minutes / 60;
	minutes = minutes % 60;
	cout << "Часов: " << hours;
	cout << "\tМинут: " << minutes;
	cout << "\t Секунд: " << seconds;



	return 0;
}
