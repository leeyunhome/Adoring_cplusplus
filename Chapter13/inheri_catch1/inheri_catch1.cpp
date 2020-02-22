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
	cout << "�߻���ų ������ ����: ";
	cin >> exID;

	try
	{
		ExceptFunction(exID);
	}
	catch (ExceptC & ex)
	{
		cout << "catch(ExceptC& ex)�� ���� ó��" << endl;
		ex.What();
	}
	catch (ExceptB & ex)
	{
		cout << "catch(ExceptB& ex)�� ���� ó��" << endl;
		ex.What();
	}
	catch (ExceptA& ex)
	{
		cout << "catch(ExceptA& ex)�� ���� ó��" << endl;
		ex.What();
	}
	

	return 0;
}

