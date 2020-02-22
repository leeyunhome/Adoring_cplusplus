// catch_over1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

const char* account = "1234-5678";	// 계좌번호
int sid = 1122;						// 비밀번호
int balance = 1000;					// 잔액

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
		cout << "계좌번호" << acc << endl;
		cout << "비밀번호" << sid << endl;
	}
};

int main()
{
	char acc[10];
	int id;
	int money;

	try
	{
		cout << "계좌번호 입력: ";
		cin >> acc;
		cout << "비밀번호 4자리 입력: ";
		cin >> id;

		if (strcmp(account, acc) || sid != id)
			throw AccountExpt(acc, id);

		cout << "출금액 입력: ";
		cin >> money;
		if (balance < money)
			throw money;

		balance -= money;
		cout << "잔액: " << balance << endl;
	}
	catch (int ex)
	{
		cout << "잔액 : " << balance << " " << "출금액 : " << money <<
			" 잔액이 부족합니다. " << endl;
	}
	catch (AccountExpt& ae)
	{
		cout << "계좌 번호나 비밀번호를 확인하세요." << endl;
		ae.What();
	}
	

	return 0;
}

