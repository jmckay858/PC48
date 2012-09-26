//============================================================================
// PC 4.8 - Change for a dollar game
// -------------------------
// Programmer: Jeremy F McKay
// Date: September 24, 2012
// -------------------------
// This is a change counting game where you enter the number of coins then
// add them up to see whether or not it equals a dollar.
//
// Note how the code does not go off to infinity, but about 70 characters.
// For example:
//
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
using namespace std;

int main() {
	double pennies
			  ,nickels
			  ,dimes
			  ,quarters
			  ,total
			  ,totalnickels
			  ,totaldimes
			  ,totalquarters;

	cout << "\n   "
		 << "Enter enough coins in a combination to make"
		 << "\n   exactly 1 dollar."
		 << "\n  ---------------------------------------------\n";

	cout << "\n   "
		 << "Enter number of pennies: ";

	cin >> pennies;

	cout << "   "
		 << "Enter number of nickels: ";

	cin >> nickels;

	cout << "   "
		 << "Enter number of dimes: ";

	cin >> dimes;

	cout << "   "
		 << "Enter number of quarters: ";

	cin >> quarters;

	//total in change

	totalnickels = nickels * 5;
	totaldimes = dimes * 10;
	totalquarters = quarters * 25;
	total = pennies + totalnickels +
			totaldimes + totalquarters;

	//cout << total;

	if (total == 100)
		cout << "\n   "
			 << "That added to a dollar you win!!\n";
	else if (total < 100)
	    cout << "\n   "
	    	 << "You came up short try again.\n";
	else
		cout << "\n   "
			 << "Too many coins try again.\n";


		return 0;
	return 0;
}
