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
		std::cout << "�ܾ��� �����մϴ�." << std::endl;
	}
};