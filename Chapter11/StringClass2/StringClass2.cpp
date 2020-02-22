// StringClass2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	String str1 = "Good ";
	String str2 = "morning";
	String str3 = str1 + str2;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;

	if (str1 == str3)
	{
		cout << "equal!" << endl;
	}

	String str4;

	cout << "Input a string: ";
	cin >> str4;
	cout << "string inputted : " << str4 << endl;

	//String str1 = "Apple";
	//String str2 = "Bondage";
	//String str3 = "Submissive";
	//String str4 = "Apple";
	//String str5 = "Apple";
	//String str6 = "Apple";
	//String str7;


	//std::cout << str1 << std::endl;
	//std::cout << str2 << std::endl;
	//std::cout << str3 << std::endl;

	//str1 += str2;
	//cout << str1 << endl;

	//if (str1 == str6)
	//{
	//	cout << "equal" << endl;
	//}
	//else
	//{
	//	cout << "Not equal" << endl;
	//}
	////std::cout << str1 + str2 + str3<< std::endl;

	//cout << "input string >> " << endl;
	//cin >> str7;
	//cout << str7 << endl;

	return 0;
}

