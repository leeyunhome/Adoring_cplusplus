// page493_abort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>	// abort �Լ��� �����ϰ� �ִ� ��� ����

using namespace std;

int main()
{
	abort();	// ���� �޽����� ����ϰ� ���� ���α׷� ����!
	cout << "END!" << endl;		// ��µ��� �ʴ´�!

	return 0;
}

