#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class ExceptA
{
public:
	void What()
	{
		cout << "ExceptA ����" << endl;
	}
};

class ExceptB : public ExceptA
{
public:
	void What()
	{
		cout << "ExceptB ����" << endl;
	}
};

class ExceptC : public ExceptB
{
public:
	void What()
	{
		cout << "ExceptC ����" << endl;
	}
};
