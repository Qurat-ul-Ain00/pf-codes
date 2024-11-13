#include <iostream>
using namespace std;

int main()
{ 
	double A;
	const double P = 3.14;
	double radian;
	cout << "Angle=";
	cin >> A;

	radian = A * (P / 180);
	cout << "Radian=" << radian;
	return 0;
}