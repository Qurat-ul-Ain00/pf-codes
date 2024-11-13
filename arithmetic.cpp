#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, num4, num5, num6, num7;

	cout << "Iake two intergers \n";
	cin >> num1 >> num2;
	
	num3 = num1 + num2;
	cout << num1 << " + " << num2 << " = "<< num3<<endl;

	num4 = num1 - num2;
	cout << num1 << " - " << num2 << " = " << num4<<endl;

	num5 = num1 * num2;
	cout << num1 << " * " << num2 << " = " << num5<<endl;
	
	num6 = num1 / num2;
	cout << num1 << " / " << num2 << " = " << num6<<endl;

	num7 = num1 % num2;
	cout << num1 << " % " << num2 << " = " << num7;

	return 0;
}