#include <iostream>
using namespace std;

int main()
{
	string card;
	int pin1 = 5617;
	int	balance = 10000;
	int money, pin;

	cout << "Insert the ATM card " << "\t";
	cin >> card;

	cout << "Insert pincode" << "\t";
	cin >> pin;
	if (pin1 == pin) {
		cout << "Proceeding" << endl;     //if pin is correct then machine will perform next step 
	}
	else {
		cout << "error \n";       //if pin is not correct machine will not perform the task
		cout << "take your ATM card";
		return 0;
	}

	cout << "Enter the amount" << "\t";
	cin >> money;

	if (money < balance) {
		cout << "transaction in process \n";
	}
	else {
		cout << "insufficient balance " << endl;
		cout << "take your ATM card";
		return 0;
	}
	string Ans;
	cout << "Do you want receipt \n";
	cin >> Ans;

	if (Ans == "Yes" ) {
		cout << "Take the receipt" << endl;
		cout << "take cash and ATM card" << endl;
	}
	else {
		cout << "Take cash and ATM card \n";
	}
	cout << "       THANK YOU       ";
	return 0;

}