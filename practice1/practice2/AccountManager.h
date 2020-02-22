#pragma once
#include "Account.h"
#include "AccountContainer.h"
#include "CreditAccount.h"
#include "ContribAccount.h"

class AccountManager
{
private:
	//Account* account[100];	// Account 저장을 위한 배열
	Container con;

public:
	AccountManager();
	~AccountManager();
	void addAnAccount(Account* acc);

	void printMenu();
	void openAnAccount();
	void deposit();
	void withdraw();
	void inquire();
};