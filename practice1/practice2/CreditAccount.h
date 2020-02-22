#pragma once
#include "Account.h"

class CreditAccount : public Account
{
private:
public:
	CreditAccount(String name_in, int id_in, int balance_in);
	virtual void AddMoney(int money_in);
};