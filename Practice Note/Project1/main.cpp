#include <iostream>
#include <vector>
#include "func.h"

using namespace std;

// ������ ���� : ���� ������


void SetMessage(const char** a)
{

}


int main()
{
	const char* msg = "Hello";


	// ���� ������ (��ǻ� �ʿ����.)
	const char** pp = &msg;

	const int a = 5;
	
	int b = a;

	return 0;
}

