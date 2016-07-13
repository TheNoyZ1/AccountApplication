#include <iostream>
#include <vector>
#include "account.h"
using namespace std;

// (1) gets the number of accounts that needs to be stored
void Account::getNumOfAccts()
{
	cout << "How many accounts will we be tracking today: ";
	cin >> numOfAccts;

	cout << endl;
}

// (2) receives the user input for the account number
void Account::getAcctNum()
{
	cout << "Please enter the account number: ";
	cin >> accountNumber;
}

// (optional) prints out the account number as entered in getAcctNum()
void Account::printAcctNum()
{
	cout << "The account number is " << accountNumber << endl;
}

// (3) uses the user's input to determine whether it's checking or savings type acct
void Account::getCheckSaving()
{
	cout << "Is this a checking (1) or savings (2) account: ";
	cin >> checkingSaving;
	cout << endl << endl;
}

// (4) decides whether account type choice was valid (1 or 2) -- could be made private bool function and accessed by getCheckSaving()
void Account::isValid()
{
	if (checkingSaving < 1 || checkingSaving > 2)
	{
		cout << "This is an invalid response." << endl;
	}
}

// (optional) prints the account type and number subsequently
void Account::printAcctType()
{
	if (checkingSaving == 1)
	{
		cout << "This is a checking account." << endl << endl;
	}
	else if (checkingSaving == 2)
	{
		cout << "This is a savings account." << endl << endl;
	}
}

// (5) sets the # of accounts to the number of storage units in the array 'accounts'
void Account::setArrayNum()
{
	accounts[numOfAccts];
}

// (6) enters the account number entered by user into the appropriate array
void Account::arrayEntry()
{
	for (int i = 0; i < numOfAccts; i++)
	{
		accounts[i] = accountNumber;
	}
}

/* TESTING!! Prints out array to ensure that array is correctly initialized
void Account::printOutArray()
{
	for (int i = 0; i < numOfAccts; i++)
	{
		cout << "Account number " << i + 1 << " is " << accounts[i];
		cout << endl;
	}
} */