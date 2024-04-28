/*
This code calculates factorial with pointers and functions.

Developer = Barış Someroğlu
Date = 28.04.2024 - 03:30 pm
*/

#include <iostream>

using namespace std;

// Function prototype
int RecursiveFactorial(int*);

int main()
{
	int Number;

	cout << "Pleas enter a number = ";
	cin >> Number;

	cout << "\nFactorail = " << RecursiveFactorial(&Number) << endl; // Call function

	return 0;
}

// Function definition
int RecursiveFactorial(int* ptrNumber)
{
	if (*ptrNumber < 0)
		return -1;

	else if (*ptrNumber <= 1)
		return 1;

	else {
		int NextValue = *ptrNumber - 1; // Important line
		return *ptrNumber * RecursiveFactorial(&NextValue);
	}

}