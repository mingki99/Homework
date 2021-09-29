//데이터형 변환
/*
1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
2. 수식에 데이터형을 혼합하여 사용했을 때
3. 함수에 매개변수를 전달할 때
*/

#include <iostream>

using namespace std;

int main()
{
	int a = 3.141592;
	cout << a << endl; // 3으로 출력 int = 정수값만 출력

	//강제적으로 데이터형 변환
	//TyoeName(a) , (TypeName)a

	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl; 
	//문자형을 정수형으로 2가지 방법으로 ★변환★
	//값은 77 , 77

	cout << static_cast<int>(ch) << endl;
	//값은 위 두가지 방식과같은 77
	//static_cast<int>(typeName) = C++ 제한적인 데이터 변환 연산자
	
	/* ★데이터 변환 방법 총 3가지★
	* 1. typeName(a)
	* 2. (typeName)a
	* 3. static_cast<int>(typeName)
	*/
	

	return 0;
}




