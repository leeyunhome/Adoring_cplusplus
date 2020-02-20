// practice1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#define NAMEMAX 45
using namespace std;

class Account
{
private:
	char *name;
	int accID;
	int balance;

public:
	Account(const char *name_in = "No name", int id_in = 0, int balance_in = 0)
		: accID(id_in), balance(balance_in)
	{
		name = new char[strlen(name_in) + 1];
		strcpy(name, name_in);
		cout << "constructor" << endl;
	}
	Account(const Account& acc)
	{
		name = new char[strlen(acc.name) + 1];
		strcpy(name, acc.name);
		accID = acc.accID;
		balance = acc.balance;
		cout << "copy constructor" << endl;
	}
	~Account()
	{
		delete[] name;
		name = nullptr;
		cout << "desturctor" << endl;
	}

	int& getId()
	{
		return accID;
	}

	int& getBalance()
	{
		return balance;
	}

	char* getName()
	{
		return name;
	}

	void AddMoney(int in_money)
	{
		balance += in_money;
	}

	void MinMoney(int in_money)
	{
		balance -= in_money;
	}

	void ShowAllData()
	{
		cout << "name : " << name << endl;
		cout << "accID : " << accID << endl;
		cout << "balance : " << balance << endl;
	}
};

enum MENU
{
	OPENANACCOUNT = 1,
	DEPOSIT,
	WITHDRAW,
	INQUIRE,
	EXIT,
};

void openAnAccount();
void deposit();
void withdraw();
void inquire();

int input_int();
int input_menu();

Account pArray[100];
int index = 0;

int main()
{
	while (1)
	{
		int choice = input_menu();

		switch (choice)
		{
		case OPENANACCOUNT:
			openAnAccount();
			break;
		case DEPOSIT:
			deposit();
			break;
		case WITHDRAW:
			withdraw();
			break;
		case INQUIRE:
			inquire();
			break;
		case EXIT:
			delete[] pArray;
			exit(0);
			break;
		default:
			cout << choice << " not implemented. try again" << endl;
		}
	}
}

int input_int()
{
	int input;
	printf(">> ");
	while (1)
	{
		if (scanf("%d%*c", &input) == 1)
		{
			return input;
		}
		else
		{
			cout << "Insert an integer. Try again" << endl;
			while (getchar() != '\n')
				continue;
		}
	}
}
int input_menu()
{
	while (1)
	{
		cout << "=============Select a menu============ " << endl;
		cout << "1. Open an accoujnt\t" << "2. Deposit" << endl;
		cout << "3. Withdraw\t" << "4. Inquire" << endl;
		cout << "5. Exit" << endl;
		int menu = input_int();
		if (menu >= 1 && menu <= 5)
		{
			return menu;
		}
		else
		{
			cout << "please select 1~4. Try again" << endl;
		}
	}
}



void openAnAccount()
{
	char name[NAMEMAX];
	int id;
	int money;
	cout << "Input name : ";
	cin >> name;
	cout << "Input accID : ";
	cin >> id;
	cout << "Input money : ";
	cin >> money;

	//Account(name, id, money);
	strcpy(pArray[index].getName(), name);
	pArray[index].getId() = id;
	pArray[index].getBalance() = money;
	index++;
}

void deposit()
{
	int id;
	int money;
	cout << "Input id : ";
	cin >> id;
	cin.ignore(32767, '\n');
	cout << "Input money : ";
	cin >> money;
	cin.ignore(32767, '\n');


	for (int i = 0; i < index; ++i)
	{
		cout << "index : " << index << endl;
		cout << "compare id # " << pArray[i].getId() << " " << id << endl;
		if (pArray[i].getId() == id)
		{
			pArray[i].AddMoney(money);
			cout << "Deposit complete" << endl;
			return;
		}
		cout << "Invalid id" << endl;
	}
}
void withdraw()
{
	int id;
	int money;
	cout << "Input id : ";
	cin >> id;
	//cin.ignore(32767, '\n');
	cout << "Input money : ";
	cin >> money;
	//cin.ignore(32767, '\n');


	for (int i = 0; i < index; ++i)
	{
		if (pArray[i].getId() == id)
		{
			if (pArray[i].getBalance() < money)
			{
				cout << "Not enough money" << endl;
				return;
			}
			else
			{
				pArray[i].MinMoney(money);
				cout << "Withdraw complete" << endl;
				return;
			}
		}
	}
	cout << "Invalid id" << endl;
}

void inquire()
{
	for (int i = 0; i < index; ++i)
	{
		pArray[i].ShowAllData();
	}
}