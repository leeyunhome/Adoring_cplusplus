// practice2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "AccountManager.h"

using namespace std;


enum MENU
{
	OPEN = 1,
	DEPOSIT,
	WITHDRAW,
	INQUIRE,
	END,
};

int main()
{
	int choice;
	AccountManager manager;
	
	
	while (1)
	{
		manager.printMenu();
		cin >> choice;

		switch (choice)
		{
		case OPEN:
			manager.openAnAccount();
			break;
		case DEPOSIT:
			manager.deposit();
			break;
		case WITHDRAW:
			manager.withdraw();
			break;
		case INQUIRE:
			manager.inquire();
			break;
		case END:
			exit(0);
			break;
		default:
			cout << choice << " is not implemented" << endl;
		}

	}
	return 0;
}