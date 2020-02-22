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

void Container::Insert(Element data)	// 순차 입력!
{
	arr[aIndex] = data;
	aIndex++;
}
Element Container::Remove(int idx)	// idx 번째 객체 삭제
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