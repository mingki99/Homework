#include <stdio.h>
#include <stdlib.h>

#include <wchar.h>
#include <assert.h>

// �빮�ڴ� ���� �������ʴ� �� �̶�� ǥ��
// �׷��Ƿ� const �� ���

const int AIR = 0;
const int STUN = 1;
const int POLYMORPH = 2;
const int INVINCIBLE = 3;

int main()
{
#pragma region ��Ʈ ����
	unsigned char flag; // ��ȣ�� ���־� >> �� �ϴ��� ��ȣ�� ������������

	// �ǽ�
	// 0b000 [����][����][����][���ߺξ�]

	// ���� ���·� �����
	flag = (1 << 3);

	// ���� ���¸� �߰��Ѵ� (���� + ����) 
	flag |= (1 << 2);

	// �������� Ȯ���ϰ� �ʹ�? (�ٸ� ���´� ���ɾ���)
	// bitmask
	bool invincible = ((flag & (1 << 3)) != 0);

	// �����̰ų� ���� �������� Ȯ���ϰ� �ʹٸ�?
	bool stunOrlnvincible = ((flag & 0b1010) != 0);
#pragma endregion

	return 0;
}

