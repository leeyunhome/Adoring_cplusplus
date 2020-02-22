// catch_understand.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main()
{
	int num;
	cout << "input number: ";
	cin >> num;
	cin.ignore(32767, '\n');

	try
	{
		if (num > 0)
			throw 10;	// pass error type of integer.
		else
			throw 'm';	// char형 예외 전달
	}
	catch (int exp)
	{
		cout << exp << " int type error " << endl;
	}
	catch (char exp)
	{
		cout << exp << " char type error " << endl;
	}

	return 0;
}

