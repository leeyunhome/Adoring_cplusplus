#include "AccountContainer.h"

Container::Container(int len)
	: aIndex(0)
{
	length = len;
	arr = new Element[length];
}

Container::~Container()
{
	delete[] arr;
}

void Container::Insert(Element data)	// ���� �Է�!
{
	arr[aIndex] = data;
	aIndex++;
}
Element Container::Remove(int idx)	// idx ��° ��ü ����
{
	Element temp = arr[idx];
	aIndex--;
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
int Container::GetElemSum() { return aIndex; };