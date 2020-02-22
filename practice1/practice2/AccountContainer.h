#pragma once

#include "Account.h"

//typedef Account* Element;

template<typename T>
class Container
{
	T* arr;		// ��ü ������ �迭�� ����Ű�� ������;
	int length;			// �迭�� ����
	int aIndex;			// ����� ��ü�� ��

public:
	Container(int len = 50);
	~Container();
	void Insert(T data);	// ���� �Է�!
	T Remove(int idx);	// idx ��° ��ü ����

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
void Container<T>::Insert(T data)	// ���� �Է�!
{
	if (aIndex == length)
	{
		std::cout << "������ ������ �����ϴ�!" << std::endl;
	}
	arr[aIndex] = data;
	aIndex++;
}

template<typename T>
T Container<T>::Remove(int idx)	// idx ��° ��ü ����
{
	if (idx < 0 || idx >= aIndex)
	{
		std::cout << "�������� �ʴ� ��� �Դϴ�.!" << std::endl;
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
		std::cout << "�������� �ʴ� ����Դϴ�!" << std::endl;
		return NULL;
	}
	return arr[idx];
}

template<typename T>
int Container<T>::GetElemSum() { return aIndex; };