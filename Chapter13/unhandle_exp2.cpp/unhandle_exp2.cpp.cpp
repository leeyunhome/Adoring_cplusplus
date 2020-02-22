// unhandle_exp2.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int divide(int a, int b);	// a/b�� �� ��ȯ

int main()
{
	int a, b;

	cout << "�� ���� ���� �Է�: ";
	cin >> a >> b;
	cin.ignore(32767, '\n');

	try
	{
		cout << "a/b�� ��: " << divide(a, b) << endl;
	}
	catch(char exception)
	{
		cout << exception << " �Է�." << endl;
		cout << " �Է� ����! �ٽ� �����ϼ���." << endl;
	}
	return 0;
}

int divide(int a, int b)
{
	if (b == 0)
		throw b;
	return a / b;
}