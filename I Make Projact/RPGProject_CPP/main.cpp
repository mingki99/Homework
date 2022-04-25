#include <iostream>

using namespace std;

// 오늘의 주제 : 캐스팅 (타입 변환)

// 1) static_cast
// 2) dynamic_cast
// 3) const_cast
// 4) reinterpret_cast

class Player
{
public:
	virtual ~Player()
	{
		
	}
};

class Knight : public Player
{

};

class Archer : public Player
{

};

void PrintName(char* str)
{
	cout << str << endl;
}


int main()
{
	// static_cast : 타입 원칙에 비춰볼 때 상식적인 캐스팅만 허용
	// 1) int <-> float
	// 2) Player* -> Knight* (다운 캐스팅)

	int hp = 100;
	int maxHp = 200;
	float ratio = static_cast<float>(hp) / maxHp;
	
	// 부모 -> 자식 / 자식 -> 부모
	Player* p1 = new Archer();
	Knight* k1 = static_cast<Knight*>(p1);

	
	// dynamic_cast : 상속 관계에서의 안전 형변환
	// RTTI (RunTime Type Information)
	// 다형성을 활용하는 방식
	// - virtual 함수를 하나라도 만들면, 객체의 메모리에 가상 함수 테이블(vftable) 주소가 기입된다.
	// - 만약 잘못된 타입으로 캐스팅을 했다하면 -> ★★ nullptr 반한 ★★
	Knight* k2 = dynamic_cast<Knight*>(p1);	// RTTI가 실행되기에 static_cast 보다 조금 느릴 수 밖에 없다.

	
	// const_cast : const를 붙이거나 때거나
	
	PrintName(const_cast<char*>("Rookiss"));

	// reinteroret_cast : 가장 강력하고 위험한 형태의 캐스팅
	// 're-interpret' : 다시 간주한다/ 생각한다
	// - 포인터랑 전혀 관계없는 다른 타입 변환 등
	__int64 address = reinterpret_cast<__int64>(k2);

	void* p = malloc(1000);
	Archer* a1 = reinterpret_cast<Archer*>(p);
	
	return 0;
}