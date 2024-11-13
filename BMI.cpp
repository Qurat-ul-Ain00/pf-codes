#include <iostream>
using namespace std;

int main()
{
	double a, b;
	double c;
	cout << "Enter your weight in pounds=";
	cin >> a;
	cout << "Enter your height in inches=";
	cin >> b;
	c = (a * 703) / (b * b);
	cout << "Your Body Mass Index is "<<c<<endl;
	if (c < 18.5)
	{
		cout << "You are underweight.";
	}
	else if (c >= 18.5 && c <= 24.9)
	{
		cout << "Your weight is normal.";
	}
	else if (c >= 25 && c <= 29.9)
	{
		cout << "Your are overweight.";
	}
	else if (c > 30)
	{
		cout << "You are obese.";
	}
	return 0;
}