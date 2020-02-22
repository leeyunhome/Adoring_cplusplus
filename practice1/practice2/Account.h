#pragma once

#include <iostream>
#include "MyString.h"

#define NMAX 45


class Account
{
private:
	//char* name;
	String name;
	int id;
	int balance;

public:
	Account();
	Account(String name_in, int id_in, int balance_in);
	Account(const Account& acc);
	Account& operator=(const Account& acc);
	~Account();
	int getId() const;
	int getBalance() const;
	const String& getName() const;
	virtual void AddMoney(int money_in);
	void MinMoney(int money_in);
	virtual void ShowAllData();
};

