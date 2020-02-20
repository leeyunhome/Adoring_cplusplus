#pragma once
#include "Account.h"
#include "CreditAccount.h"
#include "ContribAccount.h"



class AccountManager
{
private:
	Account* account[100];	// Account 저장을 위한 배열
	int index;
public:
	AccountManager(int index_in = 0);
	~AccountManager();
	void addAnAccount(Account* acc);

	void printMenu();
	void openAnAccount();
	void deposit();
	void withdraw();
	void inquire();
};