#include <iostream>
using namespace std;

int main()
{
	double C, F;
	cout << "Temperature in Celsius:";
	cin >> C;

	F = (9 / 5) * C + 32;

	cout << "Temperture in Fahrenheit:" << F;
	
	return 0;
}