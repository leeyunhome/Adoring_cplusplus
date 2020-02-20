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
	Account(const Account& acc);
	~Account();
	int getId() const;
	int getBalance() const;
	const char* getName() const;
	virtual void AddMoney(int money_in);
	void MinMoney(int money_in);
	virtual void ShowAllData();
};

