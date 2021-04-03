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


			cout << "\nNew balance Savings: $" << newval;

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


	int getbal() {


		return accountbal;


	}

	int subbal(int val) {

		return accountbal - val;

	}




};




class Checkings : public Savings {


private:
	float checkaccbal = 100;


public:

	//will be able to deposit and withdraw from account


	//added feature will be to transfer money between accounts


	void transferToSavings(int val) {

		if (val < 0) {

			cout << "ERROR!" << endl;
		}

		else {
			checkaccbal = checkaccbal - val;

			cout << "Checkings: " << checkaccbal;
			deposit(val);
		}
	}




	void transferFromSavings(int val) {

		int bal;
		int newbalance;

		if (val < 0) {

			cout << "ERROR!" << endl;
		}

		else {

			bal = getbal();
			newbalance = val + checkaccbal;
			int savbal = subbal(val);
			cout << "New Checkings: " << newbalance << endl;
			cout << "New Savings : " << savbal << endl;

		}



	}

	




};