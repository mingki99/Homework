
#include <iostream>
#include<time.h>

using namespace std;
//코드수정 유지보수하기 편하다.
#define NAME_SIZE 32

/*
열거체 : 숫자의 이름 을 부여해줌

구조체 : 관련있는 변수들을 모아서 하나의 새로운 타입을 만들어주는 기능이다.
사용자 정의 변수 타입이다.

형태 : struct 구조체명 {};  의 형태로 구성된다.

배얄과 구조체의 공통점 
1. 데이터 집합이다
2. 연속된 메모리 블럭에 할당된다. 구조체 멤버들은 연속된 메모리 
블럭으로 잡히게 된다.

*/
struct _tagStudent
{
	char	strName[NAME_SIZE];
	int		iNumber;
	int		iKor;
	int		iEng;
	int		iMath;
	int		iTotal;
	float	fAvg
};

int main()
{
	_tagStudent tStudent = {};
	_tagStudent tStudentArr[100] = {};

	//구조체 멤버에 접근할때는 . 을 이용해서 접근하게 된다.

	tStudent.iKor = 100;

	//tStudent.strName
	// 문자열을 배열에 넣어줄때에는 단순 대입으로는 불가능하다.
	// strcpy_s 라는 함수를 이용 , 문자열을 복사해야한다.

	strcpy_s(tStudent.strName, "가나다라 ASDF");

	cout << "이름 : " << tStudent.

	return 0;
}




