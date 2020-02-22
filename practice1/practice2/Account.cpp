#define _CRT_SECURE_NO_WARNINGS

#include "Account.h"
#include <iostream>

using namespace std;

Account::Account()
{}
Account::Account(const char* name_in, int id_in, int balance_in)
	: id(id_in), balance(balance_in)
{
	id = id_in;
	balance = balance_in;
	name = new char[strlen(name_in) + 1];
	strcpy(name, name_in);
}
Account::Account(const Account& acc)
	: id(acc.id), balance(acc.balance)
{
	name = new char[strlen(acc.name) + 1];
	strcpy(name, acc.name);
}
Account& Account::operator=(const Account& acc)
{
	if (this == &acc)
	{
		return *this;
	}
	delete[] name;
	name = new char[strlen(acc.name) + 1];
	strcpy(name, acc.name);
	
}

Account::~Account()
{
	delete[] name;
	id = 0;
	balance = 0;
}
int Account::getId() const
{
	return id;
}

int Account::getBalance() const
{
	return balance;
}

const char* Account::getName() const
{
	return name;
}

void Account::AddMoney(int money_in)
{
	balance += money_in;
}

void Account::MinMoney(int money_in)
{
	balance -= money_in;
}

void Account::ShowAllData()
{
	cout << "name : " << name << endl;
	cout << "id : " << id << endl;
	cout << "balance : " << balance << endl;
}