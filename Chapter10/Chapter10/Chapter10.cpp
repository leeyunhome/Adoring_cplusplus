// Chapter10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Data.h"
#include "Container.h"

using namespace std;

int main()
{
	Container ctr;

	ctr.Insert(new Data(1));
	ctr.Insert(new Data(2));
	ctr.Insert(new Data(3));
	ctr.Insert(new Data(4));
	ctr.Insert(new Data(5));
	ctr.Insert(new Data(6));
	ctr.Insert(new Data(7));

	cout << "Data 저장 후 출력" << endl;
	int num1 = ctr.GetElemSum();
	for (int i = 0; i < num1; i++)
	{
		ctr.GetItem(i)->ShowData();
	}

	Element del = ctr.Remove(2);
	delete del;

	cout << "Data 삭제 후 출력" << endl;
	int num2 = ctr.GetElemSum();
	for (int i = 0; i < num2; i++)
	{
		ctr.GetItem(i)->ShowData();
	}

	return 0;
}

