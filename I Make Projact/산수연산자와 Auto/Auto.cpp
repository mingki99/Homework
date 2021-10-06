#include<iostream>

using namespace std;

int second() 
{
	//Auto = 자동변환 {복잡한 변수사용시 사용!}
	/* Auto 틀린예시 
	* 3개의 float 형 을 만들 고 싶다
	* 
	* auto x = 0,0; = float o
	* float y = 0; = float o 
	* auto z = 0; = int x ★
	
	*/

	auto a = 100; // a는 int
	auto b = 1.5; // b는 float
	auto c = 1.3e12L; // c는 long long


	cout << a + b;


	return 0;
}