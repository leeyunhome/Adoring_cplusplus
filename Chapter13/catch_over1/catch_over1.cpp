// catch_over1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

const char* account = "1234-5678";	// ���¹�ȣ
int sid = 1122;						// ��й�ȣ
int balance = 1000;					// �ܾ�

class AccountExpt
{
	char acc[10];
	int sid;
public:
	AccountExpt(char* str, int id)
	{
		strcpy(acc, str);
		sid = id;
	}
	void What()
	{
		cout << "���¹�ȣ" << acc << endl;
		cout << "��й�ȣ" << sid << endl;
	}
};

int main()
{
	char acc[10];
	int id;
	int money;

	try
	{
		cout << "���¹�ȣ �Է�: ";
		cin >> acc;
		cout << "��й�ȣ 4�ڸ� �Է�: ";
		cin >> id;

		if (strcmp(account, acc) || sid != id)
			throw AccountExpt(acc, id);

		cout << "��ݾ� �Է�: ";
		cin >> money;
		if (balance < money)
			throw money;

		balance -= money;
		cout << "�ܾ�: " << balance << endl;
	}
	catch (int ex)
	{
		cout << "�ܾ� : " << balance << " " << "��ݾ� : " << money <<
			" �ܾ��� �����մϴ�. " << endl;
	}
	catch (AccountExpt& ae)
	{
		cout << "���� ��ȣ�� ��й�ȣ�� Ȯ���ϼ���." << endl;
		ae.What();
	}
	

	return 0;
}

