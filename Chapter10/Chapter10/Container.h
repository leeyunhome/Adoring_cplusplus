#pragma once
#include "Data.h"

typedef Data* Element;	// 이 부분은 저장될 객체에 따라 변경!

class Container
{
private:
	Element* arr;	// 객체 포인터 배열을 가리키는 포인터
	int length;		// 배열의 길이
	int aIndex;		// 저장된 객체의 수

public:
	Container(int len = 50);
	~Container();
	void Insert(Element data);	// 순차 입력
	Element Remove(int idx);	// idx 번째 객체 삭제
	Element GetItem(int idx);	// 인덱스 idx의 객체 참조
	int GetElemSum() { return aIndex; };	// 저장된 객체의 수
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
