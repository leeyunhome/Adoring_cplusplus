#pragma once
#include <iostream>

class Data
{
	int data;
public:
	Data(int d)
	{
		data = d;
	}
	void ShowData()
	{
		using namespace std;
		cout << data << endl;
	}
};