// inheri_catch1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ExceptA.h"

void ExceptFunction(int ex)
{
	if (ex == 1)
		throw ExceptA();
	else if (ex == 2)
		throw ExceptB();
	else
		throw ExceptC();
}

int main()
{
	int exID;
	cout << "발생시킬 예외의 숫자: ";
	cin >> exID;

	try
	{
		ExceptFunction(exID);
	}
	catch (ExceptC & ex)
	{
		cout << "catch(ExceptC& ex)에 의한 처리" << endl;
		ex.What();
	}
	catch (ExceptB & ex)
	{
		cout << "catch(ExceptB& ex)에 의한 처리" << endl;
		ex.What();
	}
	catch (ExceptA& ex)
	{
		cout << "catch(ExceptA& ex)에 의한 처리" << endl;
		ex.What();
	}
	

	return 0;
}

