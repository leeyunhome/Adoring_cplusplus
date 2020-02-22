#pragma once

#include "Account.h"

//typedef Account* Element;

template<typename T>
class Container
{
	T* arr;		// 객체 포인터 배열을 가리키는 포인터;
	int length;			// 배열의 길이
	int aIndex;			// 저장된 객체의 수

public:
	Container(int len = 50);
	~Container();
	void Insert(T data);	// 순차 입력!
	T Remove(int idx);	// idx 번째 객체 삭제

	T GetItem(int idx);
	int GetElemSum();
};

template<typename T>
Container<T>::Container(int len)
	: aIndex(0)
{
	if (len <= 0)
		len = 50;
	length = len;
	arr = new T[length];
}

template<typename T>
Container<T>::~Container()
{
	delete[] arr;
}

template<typename T>
void Container<T>::Insert(T data)	// 순차 입력!
{
	if (aIndex == length)
	{
		std::cout << "저장할 공간이 없습니다!" << std::endl;
	}
	arr[aIndex] = data;
	aIndex++;
}

template<typename T>
T Container<T>::Remove(int idx)	// idx 번째 객체 삭제
{
	if (idx < 0 || idx >= aIndex)
	{
		std::cout << "존재하지 않는 요소 입니다.!" << std::endl;
		return NULL;
	}
	T del = arr[idx];
	for (int i = idx; i < aIndex - 1; ++i)
	{
		arr[i] = arr[i + 1];
	}
	aIndex--;
	return del;
}

template<typename T>
T Container<T>::GetItem(int idx)
{
	if (idx < 0 || idx >= aIndex)
	{
		std::cout << "존재하지 않는 요소입니다!" << std::endl;
		return NULL;
	}
	return arr[idx];
}

template<typename T>
int Container<T>::GetElemSum() { return aIndex; };