
#include<iostream>

using namespace std;

int main()
{
	/*
	+ : 두 개의 피연산자의 합을 계산합니다.
	- : 첫 번째 피연산자에서 두 번째 피연산자의 차를 계산
	* : 두 개의 피연산자의 곱을 계산합니다
	/ : 첫 번째 피연산자에서 두 번째 피연산자를 나눈다
	>> 두 개의 피연산자가 모두 정수이면 결과값은 '몫' 이된다
	% : 첫 번째 피연산자를 두 번째 피연산자로 나누어 나머지를 구한다
	ex) 
	- 19를 6으로 나누게 된면 그 값은 1 이된다
	- 부동 소수점 (실수) 사용할 수 없다.
	*/

	int a = 10;
	int b = 3;
	int h = 5;

	int c = a + b; // = 13
	int d = a - b; // = 7 
	int e = a * b; // = 30
	int f = a / b; // = 3
	int g = a % b; // = 1

	cout << "c : " << c << endl;
	cout << "d : " << d << endl;
	cout << "e : " << e << endl;
	cout << "f : " << f << endl;
	cout << "g : " << g << endl;

	// C++ 은 기본적인 수학원칙을 따른다 ex)

	int multiple = a + b * h; // = 25
	
	// 예외인 경우 C++만이 정의한 원칙대로 계산된다 (★필요하면 Search)
	
	//int multiple = a / b * h; // = 15
	
	
	int q = 5;
	float w = 9.0;

	cout << w / q << endl; // = 1.8

	/*
	 정수 + 정수 = 정수 ★ 나머지는 소수점을 버리고 '몫'을 가져감
	 정수 + 실수 = 실수
	 실수 + 정수 = 실수
	 실수 + 실수 = 실수
	*/

    












	return 0;
}