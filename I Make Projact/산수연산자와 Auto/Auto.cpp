#include<iostream>

using namespace std;

int second() 
{
	//Auto = �ڵ���ȯ {������ �������� ���!}
	/* Auto Ʋ������ 
	* 3���� float �� �� ���� �� �ʹ�
	* 
	* auto x = 0,0; = float o
	* float y = 0; = float o 
	* auto z = 0; = int x ��
	
	*/

	auto a = 100; // a�� int
	auto b = 1.5; // b�� float
	auto c = 1.3e12L; // c�� long long


	cout << a + b;


	return 0;
}