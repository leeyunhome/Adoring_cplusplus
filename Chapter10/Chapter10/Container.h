#pragma once
#include "Data.h"

typedef Data* Element;	// �� �κ��� ����� ��ü�� ���� ����!

class Container
{
private:
	Element* arr;	// ��ü ������ �迭�� ����Ű�� ������
	int length;		// �迭�� ����
	int aIndex;		// ����� ��ü�� ��

public:
	Container(int len = 50);
	~Container();
	void Insert(Element data);	// ���� �Է�
	Element Remove(int idx);	// idx ��° ��ü ����
	Element GetItem(int idx);	// �ε��� idx�� ��ü ����
	int GetElemSum() { return aIndex; };	// ����� ��ü�� ��
};

Container::Container(int len)
	: aIndex(0)
{
	length = len;
	arr = new Element[length];
}
Container::~Container()
{
	if (arr != nullptr)
	{
		delete[] arr;
		arr = nullptr;
	}
	length = 0;
	aIndex = 0;
}

void Container::Insert(Element data)
{
	arr[aIndex] = data;
	aIndex++;
}

Element Container::Remove(int idx)
{
	/*Element temp = arr[idx];
	delete[] arr[idx];*/
	Element temp = arr[idx];
	aIndex--;
	//arr[idx] = arr[idx + 1];
	for (int i = idx; i < aIndex; ++i)
	{
		arr[i] = arr[i + 1];
	}
	return temp;
}

Element Container::GetItem(int idx)
{
	return arr[idx];
}
