// Chapter11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using std::endl;
using std::cin;
using std::cout;

using std::string;

int main()
{
	string str1 = "Good ";
	string str2 = "morning";
	string str3 = str1 + str2;
	
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	if (str1 == str3)
	{
		cout << "equall!" << endl;
	}

	string str4;
	cout << "���ڿ� �Է�: ";
	cin >> str4;
	cout << "�Է��� ���ڿ�: " << str4 << endl;

	return 0;
}

