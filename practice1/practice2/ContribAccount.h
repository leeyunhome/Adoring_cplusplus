#pragma once
#include "Account.h"

class ContribAccount : public Account
{
private:
	float total_contrib;

public:
	ContribAccount(const char* name, int id_in, int balance_in);
	void ShowAllData();

};
