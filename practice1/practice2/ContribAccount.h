//#pragma once
#ifndef _CONTRIB_ACCOUNT_H_
#define _CONTRIB_ACCOUNT_H_
#include "Account.h"

class ContribAccount : public Account
{
private:
	float total_contrib;

public:
	ContribAccount(const char* name, int id_in, int balance_in);
	virtual void AddMoney(int money_in);
	virtual void ShowAllData();

};

#endif