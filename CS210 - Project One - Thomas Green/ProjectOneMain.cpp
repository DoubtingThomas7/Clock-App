/*Thomas Green
09/16/2026
Project One: A 12-hour and 24-hour clock
*/

#include "Functions.h"
#include <iostream>
using namespace std;

int main() {
	int userInput = 0;

	// Main input loop and validation check
	while (userInput != 4) {
		displayClocks();
		printMenu();

		cout << "Enter your choice: ";
		cin >> userInput;
		cout << endl;

		if (userInput == 1) {
				addHour();
		}

		else if (userInput == 2) {
				addMinute();
		}

		else if (userInput == 3) {
				addSecond();
		}

		else if (userInput == 4) {
				cout << "Exiting program." << endl;
		}

		else {
				cout << "Invalid input! Please enter 1, 2, 3, or 4." << endl;
		}
	}
    return 0;
}