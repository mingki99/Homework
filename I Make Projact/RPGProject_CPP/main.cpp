#include <iostream>

using namespace std;

class Test
{
public:
	Test()
	{
		printf("기본생성자 호출\n");
	}
	Test(const Test& test)
	{
		printf("복사 생성자 호출\n");
	}

	// 생성자 아닙니다 [연산자] 입니다~!
	Test& operator = (const Test& test)
	{
		printf("복사 대입 연산자 실행\n\n\n");
		return *this;
	}

	int GetClass() 
	{
		printf("GetClass 함수 실행 \n"); 
		return this->_temp; 
	}

private:

int _temp;
};

int isTemp(Test* T)	// 참조냐 복사냐!
{
	int temp = T->GetClass();
	return temp;
}


int main()
{
	Test t1;	// 기본생성자 호출

	Test t2(t1);	// 복사 생성자 호출

	Test t3 = t1;	// ★복사 생성자 호출★

	t3 = t1;	// 복사 대입 연산자 호출

	int temp = isTemp(&t3);

	return 0;
}