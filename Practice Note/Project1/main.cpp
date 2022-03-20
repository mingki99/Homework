#include <iostream>
#include <vector>
#include "func.h"

using namespace std;

// ����

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

// [�Ű�����] [RET] [��������(info) ] [�Ű�����(&info)] [RET] [��������]
void CreateMonster(StatInfo* info)
{
	info->hp = 100;
	info->attack = 8;
	info->defence = 5;

}

// �����Ͱ� ���ٸ� ���簡 �̷�����.
// [�Ű�����] [RET] [��������(info) ] [�Ű�����(info(100, 8, 5))] [RET] [��������]
void CreateMonster(StatInfo info)
{
	info.hp = 100;
	info.attack = 8;
	info.defence = 5;

}

// ���� �������� �ʴ´ٸ�, ���� �� �ϴ� ���� ����

// 1) �� ���� ���

void PrintInfoByCopy(StatInfo info)
{
	cout << "===============" << endl;
	cout << "HP: " << info.hp << endl;
	cout << "attack: " << info.attack << endl;
	cout << "defence: " << info.defence << endl;
}

// 2) �ּ� ���޹��

void PrintInfoByPtr(StatInfo* info)
{
	cout << "===============" << endl;
	cout << "HP: " << info->hp << endl;
	cout << "attack: " << info->attack << endl;
	cout << "defence: " << info->defence << endl;
}

// 3) ���� ���޹��

void PrintInfoByRet(StatInfo& info)
{
	cout << "===============" << endl;
	cout << "HP: " << info.hp << endl;
	cout << "attack: " << info.attack << endl;
	cout << "defence: " << info.defence << endl;
}

// StatInfo ����ü�� 1000 ������ ¥�� ���� ����ü���?
// - (������) ����ü 1000Byte�� ��°�� ����.
// - (�ּ�����) ����ü* �� 64 = 8Byte, 32 = 4Byte
// - (��������) ����ü& �� 64 = 8Byte, 32 = 4Byte

// �� ����ó�� ���ϰ� ���
// �ּ� ����ó�� �ּҰ��� �̿��Ͽ� 

int main()
{
	// 4����Ʈ ������ �ڷ��� ���
	// �̸��� number 
	// number ���� �� �����ų�, �ִ´ٸ�
	// �ش� �ּ� (data, stack, heap) �� 1 �� �־����
	int number = 1;

	// * �ּҸ� ��´�
	// int �� �ٱ��ϸ� ������ int ������(�ٱ���) ����
	int* pointer = &number;
	// pointer int �ڷ����� �ִ� �ּҸ� Ÿ�� �̵��ؼ�, �� �ּҿ� 2�� �ִ´�.
	*pointer = 2;

	// �ο췹��(������) �������� ���� �۵� ����� int* �� �Ȱ���
	// �����Ϳ� ���� ������Ѵ�.
	int& reference = number;
	reference = 3;

	// �� �ٸ� �̸��� ���� ������?
	// 
	StatInfo info;

	PrintInfoByCopy(info);
	PrintInfoByPtr(&info);
	PrintInfoByRet(info);

	


	return 0;
}

