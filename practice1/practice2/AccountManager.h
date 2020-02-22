#pragma once
#include "CreditAccount.h"
#include "ContribAccount.h"
#include "AccountContainer.h"

typedef Account* Element;

class AccountManager
{
private:
	//Account* account[100];	// Account ������ ���� �迭
	Container<Element> con;
	// int index;				// ����� Account �� : �ʿ����!

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