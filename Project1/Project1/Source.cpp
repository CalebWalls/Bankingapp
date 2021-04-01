//This file will include the Saving class
#include "Savings.cpp"







//bank account to withdraw money

int main() {
	
	//find int Savings.cpp
	Savings obj;
	float val;
	float newval;
	int choice;

	cout << "Deposit type 1\nWithdraw type 2" << endl;
	cin >> choice;

	switch(choice) {






		case 1:
		cout << "Enter an amount to deposit" << endl;
		cin >> val;
		cout << "You entered: $" << val << endl;
		cout << "Processing..." << endl;
		obj.deposit(val);

		



		break;

		case 2:
		cout << "Enter an amount to deposit" << endl;
		cin >> val;
		cout << "You entered: $" << val << endl;
		cout << "Processing..." << endl;
		obj.withdraw(val);

		break;



		default:
		cout << "INVALID CHOICE!" << endl;


	}


	return 0;
}












