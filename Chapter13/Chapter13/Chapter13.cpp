// Chapter13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main()
{
	int a, b;

	cout << "두 개의 숫자 입력: ";
	cin >> a >> b;

	try {
		if (b == 0)
			throw b;
		cout << "a/b의 몫: " << a / b << endl;
		cout << "a/b의 나머지: " << a % b << endl;
	}
	catch (int exception)
	{
		cout << exception << " 입력. " << endl;
		cout << " 입력 오류! 다시 실행하세요." << endl;
	}
	return 0;
}

