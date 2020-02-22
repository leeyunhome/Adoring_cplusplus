#include "AccountContainer.h"
//
//Container::Container(int len)
//	: aIndex(0)
//{
//	if (len <= 0)
//		len = 50;
//	length = len;
//	arr = new T[length];
//}
//
//Container::~Container()
//{
//	delete[] arr;
//}
//
//void Container::Insert(T data)	// 순차 입력!
//{
//	if (aIndex == length)
//	{
//		std::cout << "저장할 공간이 없습니다!" << std::endl;
//	}
//	arr[aIndex] = data;
//	aIndex++;
//}
//T Container::Remove(int idx)	// idx 번째 객체 삭제
//{
//	if (idx < 0 || idx >= aIndex)
//	{
//		std::cout << "존재하지 않는 요소 입니다.!" << std::endl;
//		return NULL;
//	}
//	T del = arr[idx];
//	for (int i = idx; i < aIndex - 1; ++i)
//	{
//		arr[i] = arr[i + 1];
//	}
//	aIndex--;
//	return del;
//}
//
//T Container::GetItem(int idx)
//{
//	if (idx < 0 || idx >= aIndex)
//	{
//		std::cout << "존재하지 않는 요소입니다!" << std::endl;
//		return NULL;
//	}
//	return arr[idx];
//}
//int Container::GetElemSum() { return aIndex; };