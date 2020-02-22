#include "ContribAccount.h"

ContribAccount::ContribAccount(String name, int id_in, int balance_in)
	: Account(name, id_in, balance_in -= balance_in * 0.01), total_contrib(0)
{
	total_contrib = balance_in * 0.01;
}
void ContribAccount::AddMoney(int money_in)
{
	Account::AddMoney(money_in - money_in * 0.01);
	total_contrib += money_in * 0.01;
}

void ContribAccount::ShowAllData()
{
	Account::ShowAllData();
	std::cout << "total contribution : " << total_contrib << std::endl;
}
