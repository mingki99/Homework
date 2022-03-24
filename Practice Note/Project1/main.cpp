#include <iostream>
#include <vector>
#include "func.h"

using namespace std;

// 오늘의 주제 : 다중 포인터


void SetMessage(const char** a)
{

}


int main()
{
	const char* msg = "Hello";


	// 이중 포인터 (사실상 필요없다.)
	const char** pp = &msg;

	const int a = 5;
	
	int b = a;

	return 0;
}

