#pragma once
#include <iostream>

class Except
{
	int money;
public:
	Except(int money_in)
	{
		money = money_in;
	}
	void What()
	{
		std::cout << "잔액이 부족합니다." << std::endl;
	}
};