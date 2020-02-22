#pragma once
#include <iostream>
#include <cstring>
#include <stdbool.h>
#include <fstream>

class String
{
private:
	char* string;
	size_t m_length;

public:
	//String() {};
	String(const char* string_in = NULL);
	String(const String& str);
	~String();

	String& operator=(const String& str);
	String& operator+=(const String& str);
	bool operator == (const String& str);
	String operator+ (const String& str);

	friend std::ostream& operator << (std::ostream& out, const String& str);
	friend std::istream& operator >> (std::istream& in, String& str);
};