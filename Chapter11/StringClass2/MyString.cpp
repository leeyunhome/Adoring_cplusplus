#define _CRT_SECURE_NO_WARNINGS

#include "MyString.h"

String::String(const char* string_in)
{
	m_length = (string_in != NULL ? strlen(string_in) + 1 : 1);
	string = new char[m_length];

	if (string_in != NULL)
		strcpy(string, string_in);
}

String::String(const String& str)
{
	m_length = str.m_length;
	string = new char[m_length];
	strcpy(string, str.string);
}
String::~String()
{
	delete[] string;
	//if (string != nullptr)
	//{
	//	delete[] string;
	//	//string = nullptr;
	//	//m_length = 0;
	//}
	//else
	//{

	//}
}

String& String::operator=(const String& str)
{
	if (this == &str)
	{
		return *this;
	}
	delete[] string;
	m_length = str.m_length;
	string = new char[m_length];
	strcpy(string, str.string);
	return *this;	// 연속적인 대입 연산을 허용하기 위해
}

String& String::operator+=(const String& str)
{
	m_length = m_length + str.m_length - 1;
	char* tStr = new char[m_length];
	strcpy(tStr, string);
	delete[] string;

	strcat(tStr, str.string);
	string = tStr;
	return *this;
	/*char* temp = this->string;
	string = new char[m_length + str.m_length - 1];
	strcpy(string, temp);
	strcat(string, str.string);

	delete[] temp;
	return *this;*/
}

String String::operator+ (const String& str)
{
	char* tStr = new char[m_length + str.m_length - 1];
	strcpy(tStr, string);
	strcat(tStr, str.string);

	String temp(tStr);
	delete[] tStr;
	return temp;
	//char* temp = this->string;
	//string = new char[m_length + str.m_length - 1];
	////strcpy(this->string, this->string);
	//strcpy(string, temp);
	//strcat(this->string, str.string);

	//delete[] temp;
	//return *this;
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
	char in_str[100];
	in >> in_str;

	str = String(in_str);
	return in;
}