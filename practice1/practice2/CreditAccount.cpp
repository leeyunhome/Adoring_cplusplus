#include "CreditAccount.h"

CreditAccount::CreditAccount(const char* name_in, int id_in, int balance_in)
	: Account(name_in, id_in, balance_in += balance_in * 0.01)
{

}

void CreditAccount::AddMoney(int money_in)
{
	Account::AddMoney(money_in += money_in * 0.01);
}