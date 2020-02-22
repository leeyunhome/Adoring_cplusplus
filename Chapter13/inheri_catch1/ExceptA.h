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
		cout << "ExceptA 예외" << endl;
	}
};

class ExceptB : public ExceptA
{
public:
	void What()
	{
		cout << "ExceptB 예외" << endl;
	}
};

class ExceptC : public ExceptB
{
public:
	void What()
	{
		cout << "ExceptC 예외" << endl;
	}
};
