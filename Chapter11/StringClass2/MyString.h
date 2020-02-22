#pragma once
#include <iostream>
#include <cstring>
#include <stdbool.h>
#include <fstream>

class String
{
private:
	char* string;
	int m_length;

public:
	//String() {};
	String(const char* string_in = "No name");
	String(const String& str);
	/*~String()
	{
		if (string != nullptr)
		{
			delete[] string;
			string = nullptr;
			m_length = 0;
		}
		else
		{

		}
	}*/
	
	String& operator=(const String& str);
	String& operator+=(const String& str);
	String& operator+ (const String& str);
	bool operator == (const String& str);

	friend std::ostream& operator << (std::ostream& out, const String& str);
	friend std::istream& operator >> (std::istream& in, String& str);
};