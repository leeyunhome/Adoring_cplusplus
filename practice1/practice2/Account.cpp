#define _CRT_SECURE_NO_WARNINGS

#include "Account.h"
#include <iostream>

using namespace std;

Account::Account()
{}
Account::Account(const char* name_in, int id_in, int balance_in)
	: id(id_in), balance(balance_in)
{
	name = new char[strlen(name_in) + 1];
	strcpy(name, name_in);
}
Account::~Account()
{
	delete[] name;
	id = 0;
	balance = 0;
}
int Account::getId()
{
	return id;
}

int Account::getBalance()
{
	return balance;
}

char* Account::getName()
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