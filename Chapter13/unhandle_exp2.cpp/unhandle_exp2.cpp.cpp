// unhandle_exp2.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int divide(int a, int b);	// a/b의 몫만 반환

int main()
{
	int a, b;

	cout << "두 개의 숫자 입력: ";
	cin >> a >> b;
	cin.ignore(32767, '\n');

	try
	{
		cout << "a/b의 몫: " << divide(a, b) << endl;
	}
	catch(char exception)
	{
		cout << exception << " 입력." << endl;
		cout << " 입력 오류! 다시 실행하세요." << endl;
	}
	return 0;
}

int divide(int a, int b)
{
	if (b == 0)
		throw b;
	return a / b;
}