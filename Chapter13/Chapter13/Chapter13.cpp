// Chapter13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main()
{
	int a, b;

	cout << "�� ���� ���� �Է�: ";
	cin >> a >> b;

	try {
		if (b == 0)
			throw b;
		cout << "a/b�� ��: " << a / b << endl;
		cout << "a/b�� ������: " << a % b << endl;
	}
	catch (int exception)
	{
		cout << exception << " �Է�. " << endl;
		cout << " �Է� ����! �ٽ� �����ϼ���." << endl;
	}
	return 0;
}

