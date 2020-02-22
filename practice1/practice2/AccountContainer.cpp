#include "AccountContainer.h"

Container::Container(int len)
	: aIndex(0)
{
	if (len <= 0)
		len = 50;
	length = len;
	arr = new Element[length];
}

Container::~Container()
{
	delete[] arr;
}

void Container::Insert(Element data)	// ���� �Է�!
{
	if (aIndex == length)
	{
		std::cout << "������ ������ �����ϴ�!" << std::endl;
	}
	arr[aIndex] = data;
	aIndex++;
}
Element Container::Remove(int idx)	// idx ��° ��ü ����
{
	if (idx < 0 || idx >= aIndex)
	{
		std::cout << "�������� �ʴ� ��� �Դϴ�.!" << std::endl;
		return NULL;
	}
	Element del = arr[idx];
	for (int i = idx; i < aIndex - 1; ++i)
	{
		arr[i] = arr[i + 1];
	}
	aIndex--;
	return del;
}

Element Container::GetItem(int idx)
{
	if (idx < 0 || idx >= aIndex)
	{
		std::cout << "�������� �ʴ� ����Դϴ�!" << std::endl;
		return NULL;
	}
	return arr[idx];
}
int Container::GetElemSum() { return aIndex; };