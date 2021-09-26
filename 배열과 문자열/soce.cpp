#include<iostream>

using namespace std;

int main()
{
	/*
	배열 (array) : 같은 데이터형의 집합
	type Name arrayName[arraySize];
	*/

	short month[12] = { 1, 2, 3 }; //배열 선언

	//arrayName = 고정배열 (fixed array)
	//[arraySize] = 요소 (element)
	/*
	index = 요소에는 이름이없어 index 라는 매개변수 사용
	ex) 배열 길이 = N
	배열 요소의 인덱스 = N - 1까지 = 범위 (range)

	*/


	cout << month[0] << endl; 
	/*
	0번째 = 1 이 출력됨
	1이 출력되는 이유 = index
	
	*/

	/* ★규칙★
	- 배열 원소에 대입할 값들을 콤마로 구분하여 중활호로 묶어 선언
	- 초기화를 선언 이후 나중에 할 수는 없음
	- 배열을 다른 배열에 통째로 대입할 수 없음
	ex) 불가능
	short month[12] = { 1, 2, 3 };
	short year[5] = { 0, 1, 3};
	year = month; x 

	- 초기화 값의 개수{1,2,3} 를 배열 원소의 개수[12]보다 모자라게 제공할수있음
	- 배열을 부분적으로 초기화하면, 나머지 원소들을 모두 0으로 설정됨
	ex)
	cout << month[3];   = 0으로 출력 (대쳐됨)

	즉, 명시적으로 첫 번째 원소만 0으로 초기화하면, 나머지 원소들은 모두 0으로 초기화됨
	
	- 배열을 초기화할때 대괄호 속을 비워드면 컴파일러가 초기화 값으 개수를 헤아려 배열 원소 개수를 저장함
	ex)
	short year[] = {1,2,3} o

	★cout << year[4];  x  = 이상한 좌표값 출력됨★
	*/


	//문자열 : 문자의 열

	char a[6] = { 'H', 'e', 'l', 'l', 'o', '\0' }; //★null 문자★

	cout << a << endl;


	char b[] = "Hello"; 
	/*
	b[] : 배열 규칙으로 인한 원소개수가 자동으로 정해진다
	"" : 자동으로 null 문자가 포함되어있다
	*/ 

	cout << b << endl;


	return 0;

}