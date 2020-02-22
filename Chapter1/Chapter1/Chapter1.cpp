// Chapter1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//void swap(int*, int*);
//void swap(char*, char*);
//void swap(double*, double*);

template<typename T>
void swap(T* a, T* b);
int main()
{
	int num1 = 20, num2 = 32;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'a', ch2 = 'z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;

	return 0;
}
//void swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//void swap(char* x, char* y)
//{
//	char temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//void swap(double* x, double* y)
//{
//	double temp = *x;
//	*x = *y;
//	*y = temp;
//}

template<typename T>
void swap(T* a, T* b)
{
	T temp = *a;
	*a = *b;
	*b = temp;
}