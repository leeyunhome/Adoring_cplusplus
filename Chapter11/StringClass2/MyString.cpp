#define _CRT_SECURE_NO_WARNINGS

#include "MyString.h"

String::String(const char* string_in)
	: m_length(0)
{
	string = new char[strlen(string_in) + 1];
	strcpy(string, string_in);
	m_length = (int)strlen(string_in);
}

String::String(const String& str)
{
	string = new char[strlen(str.string) + 1];
	strcpy(string, str.string);
	m_length = str.m_length;
}

String& String::operator=(const String& str)
{
	if (this == &str)
	{
		return *this;
	}
	delete[] string;
	string = new char[strlen(str.string) + 1];
	strcpy(string, str.string);
	return *this;
}

String& String::operator+=(const String& str)
{
	char* temp = this->string;
	string = new char[strlen(str.string) + m_length + 1];
	strcpy(string, temp);
	strcat(this->string, str.string);
	return *this;
}

String& String::operator+ (const String& str)
{
	char* temp = this->string;
	string = new char[m_length + strlen(str.string) + 1];
	//strcpy(this->string, this->string);
	strcpy(string, temp);
	strcat(this->string, str.string);
	return *this;
}

bool String::operator == (const String& str)
{
	if (strcmp(this->string, str.string) == 0) return true;
	else
		return false;
}

std::ostream& operator << (std::ostream& out, const String& str)
{
	out << str.string;
	return out;
}

std::istream& operator >> (std::istream& in, String& str)
{
	in >> str.string;
	return in;
}