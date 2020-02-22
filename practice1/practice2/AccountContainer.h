#pragma once

#include "Account.h"

typedef Account* Element;

class Container
{
	Element* arr;		// ��ü ������ �迭�� ����Ű�� ������;
	int length;			// �迭�� ����
	int aIndex;			// ����� ��ü�� ��

public:
	Container(int len = 50);
	~Container();
	void Insert(Element data);	// ���� �Է�!
	Element Remove(int idx);	// idx ��° ��ü ����

	Element GetItem(int idx);
	int GetElemSum();
};