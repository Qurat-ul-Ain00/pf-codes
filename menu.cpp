#include <iostream>
using namespace std;
int main()
{
	cout << "Menu:" << endl;
	cout << "1.Summation." << endl;
	cout << "2.Subtraction." << endl;
	cout << "3.Division." << endl;
	cout << "4.Multiplication." << endl;
	
	float num1, num2;
	cout << "Enter Number1=";
	cin >> num1;
	cout << "Enter Number2=";
	cin >> num2;
	int choice;
	cout << "Choice:";
	cin >> choice;
	if (choice == 1)
		cout << num1 << "+" << num2 << "=" << num1 + num2;
	if (choice == 2)
		cout << num1 << "-" << num2 << "=" << num1 - num2;
	if (choice == 3)
		cout << num1 << "/" << num2 << "=" <<num1/num2;
	if (choice == 4)
		cout << num1 << "*" << num2 << "=" << num1 * num2;
		return 0;
}