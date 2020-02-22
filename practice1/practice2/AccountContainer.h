#pragma once

#include "Account.h"

typedef Account* Element;

class Container
{
	Element* arr;		// 객체 포인터 배열을 가리키는 포인터;
	int length;			// 배열의 길이
	int aIndex;			// 저장된 객체의 수

public:
	Container(int len = 50);
	~Container();
	void Insert(Element data);	// 순차 입력!
	Element Remove(int idx);	// idx 번째 객체 삭제

	Element GetItem(int idx);
	int GetElemSum();
};