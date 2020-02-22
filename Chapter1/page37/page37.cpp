// page37.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int function(int a)
{
	return a + 1;
}

int function(void)
{
	return 10;
}

int main()
{
	std::cout << function(1) << std::endl;
	return 0;
}

