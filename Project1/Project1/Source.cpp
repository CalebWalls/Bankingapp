#include <iostream>
#include <string>
using namespace std;



class Savings {

private: 
float accountbal = 100;


public:


	void deposit(int val) {
		float newval;

		if (val < 0) {

			cout << "ERROR: Only enter positive values!" << endl;

		}

		else {
			newval = accountbal + val;


			cout << "New balance: $" << newval;

		}

	}

	void withdraw(int val) {

		float newval;

		if (val < 0) {

			cout << "ERROR: Only enter positive values!" << endl;

		}

		else {
			newval = accountbal - val;

			cout << "You withdrew: $" << val << endl;;

			if (newval < 0) {

				cout << "\nWARNING YOU NOW HAVE A NEGATIVE VALUE IN YOUR ACCOUNT" << endl;
				cout << "PLEASE SETTLE THIS DEBT ASAP OR THE BANK WILL CHARGE INTEREST" << endl;

			}

			cout << "\nNew balance: $" << newval;

			
			

		}



	}







};







//bank account to withdraw money

int main() {
	
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












