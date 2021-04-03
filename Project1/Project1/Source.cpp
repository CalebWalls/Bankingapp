//This file will include the Saving class
#include "Savings.cpp"








//bank account to withdraw money

int main() {
	
	//find int Savings.cpp
	Checkings jk;
	Savings obj;
	float val;
	float newval;
	int choice;

	

	cout << "Deposit type 1\nWithdraw type 2\nTransfer to savings 3\nTransfer to checkings 4" << endl;
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

		case 3:

			int amount;
			cout << "Enter an amount to transfer to savings: " << endl;
			cin >> amount;
			jk.transferToSavings(amount);



			break;




		case 4:

			int value;
			cout << "Enter an amount to transfer to checkings: " << endl;
			cin >> value;
			jk.transferFromSavings(value);



			break;

		default:
		
		cout << "INVALID CHOICE!" << endl;


	}


	return 0;
}












