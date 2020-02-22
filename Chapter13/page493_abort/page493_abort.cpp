// page493_abort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>	// abort 함수를 선언하고 있는 헤더 파일

using namespace std;

int main()
{
	abort();	// 에러 메시지를 출력하고 나서 프로그램 종료!
	cout << "END!" << endl;		// 출력되지 않는다!

	return 0;
}

