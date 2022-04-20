#include <iostream>

using namespace std;

// 오늘의 주제 : 동적 할당

// 메모리 구조 복습
// - 실행할 코드가 저장되는 영역 -> 코드 영역
// - 전역 (global) / 정적(static) 변수-> 데이터 영역
// - 지역변수 / 매개변수 -> 스택 영역
// - 동적 할당 -> 힙 영역

// 지금까지 데이터 영역/ 스택 영역 이용해서

// 실제상황)
// - MMORPG 동적 1명 ~ 5만명, 몬스터 1마리 ~ 500 만 마리
// - 몬스터 생성 이벤트 -> 5분동안 몬스터가 10배 많이 나옴

// - 스택 영역
// 함수가 끝나면 같이 정리되는 불안정한 메모리
// 잠시 함수에 매개변수 넘긴다거나, 하는 용도
// - 메모리 영역
// 프로그램이 실행되는 도중에는 '무조건' 사용되는
// - 필요할때만 사용하고, 필요없으면 반납할 수 있는!
// - 그러면서도 (스택과는 다르게) 우리가 생성/소멸 시점을 관리할 수 있는 영역
// - 그겄은 바로 HEAP
// 동적할당과 연관된 함수/연산자 : malloc / free, new / delete, new[] / delete[]

// malloc (함수) C언어
// - 할당할 메모리 크기를 건내준다
// - 메모리 할랑 후 시작 주소를 가리키는 포인터를 반환해준다 (메모리 부족 NULL)

// feee (함수) C언어
// - molloc (혹은 기타 calloc, realloc등의 사촌) 을 통해 할당된 영역을 해제 
// - 힙 관리자가 할당/미할당 여부를 구분해서 관리

// new / delete (연산자) C++ 언어

// new[] / delete[]
// - new가 malloc에 비해 좋긴하지만 배열과 같이 N개 데이터를 같이 할당할때 사용

// molloc/free vs new/delete
// - 사용 편의성 -> new/delete 승!
// - 타입에 상관없이 특정한 크기의 메모리 영역을 할당받으려면 -> malloc/free 승!

// 가장 큰 차이점 : new/delete -> 생성 타입이 클래스일 경우 생성자/소멸자를 호출해준다

class Monster
{
public:
	Monster()
	{
		printf("Monster Spawn\n");
	}

	~Monster()
	{
		printf("Monster delete\n");
	}

	int _hp;
	int _x;
	int _y;
};

// Monster monster[500 * 10000];

int main()
{
	// 커널 영역을 왜 배워야 하는가?

	// 유저 영역 [메모장] [곰플레이어] [LOL]
	// ---------------------------------------------
	// 커널 영역 (Windows 등의 핵심 코드)

	// 유저 영역) 운영체제에서 제공하는 API 호출
	// 커널 영역) 메모리 할당해서 건내줌
	// 유저 영역) ㄳㄳ 잘 쓸게요~

	// [                                                 ]	한번에 크게요청
	// [||||||                                           ]  [LOL] 에서 잘라서 사용
	// C++ 에서는 기본적으로 CRT(C런타임 라이브러리)의 [힙 관리자]를 통해 힙 영역 사용
	// 단, 정말 원한다면 우리가 직접 API를 통해 힙을 생성하고 관리할 수도 있음 (MMORPG 서버 메모리 풀링)


	// void*
	// *가 있으니까 포인터 (즉 주소를 담는다)
	// 타고 가면 void 뭐가 있는지 모르겠으니까 개발자가 적당히 변환해서 사용해야한다

	void* pointer = malloc(sizeof(Monster));

	Monster* m1 = (Monster*)pointer;
	m1->_hp = 100;
	m1->_x = 1;
	m1->_y = 2;
	
	free(pointer);

	pointer = nullptr;

	Monster* m2 = new Monster;
	m2->_hp = 200;
	m2->_x = 2;
	m2->_y = 3;

	delete m2;

	// 5마리의 메모리생성
	Monster* m3 = new Monster[5];	// monster 5개의 메모리를 생성 그중에 0번째에서 1개 생성
	m3->_hp = 300;
	m3->_x = 3;
	m3->_y = 4;

	Monster* m4 = (m3 + 1);	// m3의 주소 다음칸 m4 5개중 1번째 객체 생성
	m4->_hp = 400;
	m4->_x = 4;
	m4->_y = 5;


	delete[] m3;



	return 0;
}