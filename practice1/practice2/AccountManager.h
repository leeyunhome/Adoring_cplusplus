#pragma once
#include "CreditAccount.h"
#include "ContribAccount.h"
#include "AccountContainer.h"

typedef Account* Element;

class AccountManager
{
private:
	//Account* account[100];	// Account 저장을 위한 배열
	Container<Element> con;
	// int index;				// 저장된 Account 수 : 필요없다!

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