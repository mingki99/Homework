#include <iostream>

using namespace std;

class Player
{
public:
	// �Ϲ� �Լ�
	void Move() { cout << "Move Player [�Ϲ��Լ� ȣ��]! " << endl; }

	// �����Լ�
	virtual void VDie() { cout << "VDie Player [�����Լ� ȣ��] ! " << endl; };
};

class Knight : public Player
{
public:
	// �Ϲ� �Լ�
	void Move() { cout << "Move Knight [�Ϲ��Լ� ȣ��] ! " << endl; }
	// ���� �Լ�
	virtual void VDie() { cout << "VDie Knight [�����Լ� ȣ��] ! " << endl; }
};

// ��絵 �ÿ��̾� �̱⿡ �÷��̾� �ȿ��ִ� �Լ� ����
void MovePlayer(Player* player)
{	
	// calss player�� �Լ� ����

	player->Move();	// �Ϲ� �Լ�
	player->VDie(); // �����Լ�
}
int main()
{
	Knight k;
	MovePlayer(&k);		// ���� �÷��̾� �ΰ�? YES

	return 0;
}