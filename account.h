#pragma once
#include <vector>

class Account
{
public:
	// Public functions
	int numOfAccts;
	void getAcctNum();
	void printAcctNum();
	void getCheckSaving();
	void printAcctType();
	void isValid();
	void getNumOfAccts();
	void printVector();
	void arrayEntry();
protected:

private:
	// Private integers
	int accountNumber;
	int checkingSaving;
	std::vector<int> accountStorage;
};