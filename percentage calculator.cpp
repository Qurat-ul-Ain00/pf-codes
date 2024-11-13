#include <iostream>
using namespace std;

int main()
{
	string sub;
	cout << "Enter Course Name : ";
	cin >> sub;

	double num1, num2,num3;
	cout << "Obtained Marks : ";
	cin >> num1;

	cout << "Total marks : ";
	cin >> num2;
	
	cout << "In ";
	cin >> sub;
	num3 = (num1 / num2) * 100;
	cout << "You have secured " << num3;
	return 0;
}