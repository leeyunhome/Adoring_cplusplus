#define _CRT_SECURE_NO_WARNINGS
#include "AccountManager.h"
#include <iostream>

using namespace std;

AccountManager::AccountManager(int index_in)
	: index(index_in)
{
}

void AccountManager::addAnAccount(Account* acc)
{
	account[index++] = acc;
	/*for (int i = 0; i < index; ++i)
	{
		strcpy(account[i]->getName(), acc->getName());
		account[i]->getId() =  acc->getId();
		account[i]->getBalance() = acc->getBalance();
	}*/

	/*strcpy(account[index]->getName(), acc->getName());
	account[index]->getId() = acc->getId();
	account[index]->getBalance() = acc->getBalance();
	index++;*/
}

AccountManager::~AccountManager()
{

}

void AccountManager::printMenu()
{
	cout << "=========Menu============" << endl;
	cout << "1. Open an account" << "\t" << " 2. Deposit" << endl;
	cout << "3. Withdraw " << "\t" << " 4. Inquire" << endl;
	cout << "5. End" << endl;
	cout << endl;
}
void AccountManager::openAnAccount()
{
	char name[NMAX];
	int id;
	int money;
	int accountType;
	cout << "Choose Account type" << endl;
	cout << "1. Credit" << endl;
	cout << "2. Contrib" << endl;
	cout << "3. General" << endl;
	cin >> accountType;

	cout << "open an account -----" << endl;
	cout << "Input name >> ";
	cin >> name;
	cout << "Input id >> ";
	cin >> id;
	cout << "Input money >> ";
	cin >> money;

	if (accountType == 1)
	{
		addAnAccount(new CreditAccount(name, id, money));
	}
	else if (accountType == 2)
	{
		addAnAccount(new ContribAccount(name, id, money));
	}
	else if (accountType == 3)
	{
		addAnAccount(new Account(name, id, money));
	}
	else
	{
		cout << "Not implemented" << endl;
	}

}

void AccountManager::deposit()
{
	int id;
	int money;
	cout << "Input id >> ";
	cin >> id;
	cout << "Input money >> ";
	cin >> money;

	for (int i = 0; i < index; ++i)
	{
		if (account[i]->getId() == id)
		{
			account[i]->AddMoney(money);
			cout << "deposit complete" << endl;
			return;
		}
	}
	cout << "Invalid id" << endl;
}

void AccountManager::withdraw()
{
	int id;
	int money;
	cout << "Input id >> ";
	cin >> id;
	cout << "Input money >> ";
	cin >> money;

	for (int i = 0; i < index; ++i)
	{
		if (account[i]->getId() == id)
		{
			if (account[i]->getBalance() < money)
			{
				cout << "Not enough money" << endl;
				return;
			}
			else
			{
				account[i]->MinMoney(money);
				cout << "withdraw complete" << endl;
				return;
			}
			
		}
	}
	cout << "Invalid id" << endl;
}

void AccountManager::inquire()		// inquire total balance
{
	for (int i = 0; i < index; ++i)
	{
		account[i]->ShowAllData();
	}
}

