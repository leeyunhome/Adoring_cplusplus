#define _CRT_SECURE_NO_WARNINGS

#include "Account.h"
#include <iostream>

//using namespace std;
using std::cout;
using std::cin;
using std::endl;

Account::Account()
{}
Account::Account(String name_in, int id_in, int balance_in)
	: id(id_in), balance(balance_in)
{
	id = id_in;
	balance = balance_in;
	name = name_in;
}
//Account::Account(const Account& acc)
//	: id(acc.id), balance(acc.balance)
//{
//	name = new char[strlen(acc.name) + 1];
//	strcpy(name, acc.name);
//}

//Account& Account::operator=(const Account& acc)
//{
//	if (this == &acc)
//	{
//		return *this;
//	}
//	delete[] name;
//	name = new char[strlen(acc.name) + 1];
//	strcpy(name, acc.name);
//	id = acc.id;
//	balance = acc.balance;
//
//	return *this;
//}

//Account::~Account()
//{
//	delete[] name;
//	id = 0;
//	balance = 0;
//}
int Account::getId() const
{
	return id;
}

int Account::getBalance() const
{
	return balance;
}

const String& Account::getName() const
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