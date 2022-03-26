#include <iostream>
#include <vector>
#include "func.h"

using namespace std;

// 오늘의 주제 : 포인터 마무리

// 1) 포인터 vs 배열 2탄
// 2) 주의사항 (마음가짐)

int* TestPointer()
{
	int a = 1;

	return &a;
}

int main()
{
	int* p;

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	p = arr;

	cout << p[0] << endl;
	cout << arr[0] << endl;
	cout << p[5] << endl;
	cout << arr[5] << endl;
	cout << *p << endl;
	cout << *arr << endl;
	cout << *(p + 3) << endl;
	cout << *(arr + 3) << endl;

	int arr2[2][2] = { {1,2}, {3,4} };

	int(*p2)[2] = arr2;
	cout << (*p2)[0] << endl;
	cout << (*p2)[1] << endl;
	cout << (*(p2+1))[0] << endl;
	cout << (*(p2 + 1))[1] << endl;
	

	cout << p2[0][0] << endl;
	cout << p2[0][1] << endl;
	cout << p2[1][0] << endl;
	cout << p2[1][1] << endl;



	return 0;
}

