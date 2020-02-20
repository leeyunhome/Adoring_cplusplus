#pragma once
#include "Account.h"

class CreditAccount : public Account
{
private:
public:
	CreditAccount(const char* name_in, int id_in, int balance_in);
	void AddMoney(int money_in);
};