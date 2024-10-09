// Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int input;//number user enters
	int product = 1;

	cout << "Factorial:" << endl;
	cout << "Enter a positive number: ";
	cin >> input;

	//positive numbers only
	if (input < 0) 
		//if user keeps entering positive numbers
		while (input < 0) {
			cout << "Nice try, please enter a POSITIVE number...: ";
			cin >> input;
		}

	//factorial series
	for (int i = 1; i <= input; i++) {

		if (i == 1) {
			cout << input << "! = ";
			product = i * product;
		}
		else if (i == input) {
			product = i * product;
			cout << i << " = " << product << endl;
		}
		else {
			product = i * product;
			cout << i << " * ";
		}
	}
}
void arithmetic() {
	int start;
	int difference;
	int series;
	int nexNum;
	int sum = 0;

	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> start;
	cout << "Enter a number to add each time: ";
	cin >> difference;
	cout << "Enter the number of elements in the series(positive number): ";
	cin >> series;

	//positive numbers only
	if (series < 0)
		//if user keeps entering positive numbers
		while (series < 0) {
			cout << "Positive number only: ";
			cin >> series;
		}

	//arithmetic series
	for (int i = 0; series > i; i++) {

		if (i == 0) {
			sum = start;
			cout << start << " + ";
			nexNum = start + difference;
		}
		else if (i == (series - 1)) {
			sum = sum + nexNum;
			cout << nexNum << " = " << sum << endl;
		}
		else {
			sum = sum + nexNum;
			cout << nexNum << " + ";
			nexNum = nexNum + difference;
		}
	}
}
void geometric() {
	
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
