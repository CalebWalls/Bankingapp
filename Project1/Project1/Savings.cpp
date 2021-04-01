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




