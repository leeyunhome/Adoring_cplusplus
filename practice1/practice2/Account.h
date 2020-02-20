#pragma once

#include <iostream>

#define NMAX 45


class Account
{
private:
	char* name;
	int id;
	int balance;

public:
	Account();
	Account(const char* name_in, int id_in, int balance_in);
	~Account();
	int getId();
	int getBalance();
	char* getName();
	virtual void AddMoney(int money_in);
	void MinMoney(int money_in);
	virtual void ShowAllData();
};

