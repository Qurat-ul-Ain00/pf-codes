#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	char ch;

	cout << "Enter num1=";
	cin >> num1;

	cout << "Enter num2";
	cin >> num2;

	cout << "Operator";
	cin >> ch;

	switch (ch)
	{
	case '+':
		cout << "Addition=" << num1 + num2;
		break;

	case '-':
		cout << "Subraction" << num1 - num2;
		break;
	case '/':
		cout << "Divide" << num1 / num2;
		break;
	case '*':
		cout << "Multiplication" << num1 * num2;
		break;

	default:
		cout << "No valid case available ";
		break;
	}
	return 0;
}