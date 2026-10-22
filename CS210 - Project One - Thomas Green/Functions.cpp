#include "Functions.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int hours = 15;
int minutes = 22;
int seconds = 1;

// Function to add '0' before any number less than 10.;
void printTime(int number) {
	if (number < 10) {
		cout << "0" << number;
	}

	else {
		cout << number;
	}

}

// Function to add one hour and start over once hour reaches 24
void addHour() {
	hours = hours + 1;
	if (hours >= 24) {
		hours = 0;
	}
}

// Function to add one minute and start over once minutes reaches 60
void addMinute() {
	minutes = minutes + 1;
	if (minutes >= 60) {
		minutes = 0;
		addHour();
	}
}

void addSecond() {
	seconds = seconds + 1;
	if (seconds >= 60) {
		seconds = 0;
		addMinute();
	}
}

// Function to display the clocks
void displayClocks() {
	// AM/PM determination
	string amPm = "AM";

	if (hours >= 12) {
		amPm = "PM";
	}

	// Convert 24-hour clock to 12-hour clock
	int twelveHourClock = hours;

	if (twelveHourClock == 0) {
		twelveHourClock = 12;
	}

	else if (twelveHourClock > 12) {
		twelveHourClock = twelveHourClock - 12;
	}

	// Output clocks to screen
	cout << setfill('*') << setw(26) << "" << "    " << setfill('*') << setw(26) << "" << endl;
	cout << "*      12-Hour Clock     *    *      24-Hour Clock     *" << endl;

	cout << "*       " << setfill('0') << setw(2) << twelveHourClock << ":"
		<< setfill('0') << setw(2) << minutes << ":"
		<< setfill('0') << setw(2) << seconds << " " << amPm
		<< "      *    *      "
		<< setfill('0') << setw(2) << hours << ":"
		<< setfill('0') << setw(2) << minutes << ":"
		<< setfill('0') << setw(2) << seconds
		<< "        *" << endl;

	cout << setfill('*') << setw(26) << ""
		<< "    "
		<< setfill('*') << setw(26) << "" << endl;
	cout << endl;

	cout << setfill(' ');
}

void printMenu() {
	cout << setfill('*') << setw(26) << "" << endl;
	cout << "* 1 - Add One Hour       *" << endl;
	cout << "* 2 - Add One Minute     *" << endl;
	cout << "* 3 - Add One Second     *" << endl;
	cout << "* 4 - Exit Program       *" << endl;
	cout << setfill('*') << setw(26) << "" << endl;
}