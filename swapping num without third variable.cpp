#include <iostream>

using namespace std;
int main()
{
	int num1, num2,temp;

	cout << "Value of num1 before swap = ";
	cin >> num1;
	cout << "value of num2 before swap = ";
	cin >> num2;

	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << endl<<"the value of num1 after swap = " << num1 << endl << "the value of num2 after swap = " << num2;
        return 0;
}