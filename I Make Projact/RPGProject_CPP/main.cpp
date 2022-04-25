#include <iostream>

using namespace std;

// ������ ���� : ĳ���� (Ÿ�� ��ȯ)

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
	// static_cast : Ÿ�� ��Ģ�� ���纼 �� ������� ĳ���ø� ���
	// 1) int <-> float
	// 2) Player* -> Knight* (�ٿ� ĳ����)

	int hp = 100;
	int maxHp = 200;
	float ratio = static_cast<float>(hp) / maxHp;
	
	// �θ� -> �ڽ� / �ڽ� -> �θ�
	Player* p1 = new Archer();
	Knight* k1 = static_cast<Knight*>(p1);

	
	// dynamic_cast : ��� ���迡���� ���� ����ȯ
	// RTTI (RunTime Type Information)
	// �������� Ȱ���ϴ� ���
	// - virtual �Լ��� �ϳ��� �����, ��ü�� �޸𸮿� ���� �Լ� ���̺�(vftable) �ּҰ� ���Եȴ�.
	// - ���� �߸��� Ÿ������ ĳ������ �ߴ��ϸ� -> �ڡ� nullptr ���� �ڡ�
	Knight* k2 = dynamic_cast<Knight*>(p1);	// RTTI�� ����Ǳ⿡ static_cast ���� ���� ���� �� �ۿ� ����.

	
	// const_cast : const�� ���̰ų� ���ų�
	
	PrintName(const_cast<char*>("Rookiss"));

	// reinteroret_cast : ���� �����ϰ� ������ ������ ĳ����
	// 're-interpret' : �ٽ� �����Ѵ�/ �����Ѵ�
	// - �����Ͷ� ���� ������� �ٸ� Ÿ�� ��ȯ ��
	__int64 address = reinterpret_cast<__int64>(k2);

	void* p = malloc(1000);
	Archer* a1 = reinterpret_cast<Archer*>(p);
	
	return 0;
}