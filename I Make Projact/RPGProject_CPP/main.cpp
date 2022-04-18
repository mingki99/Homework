#include <iostream>

using namespace std;

// ������ ���� : ������ �����ε� (Operator Overlodong)

// ������ vs �Լ�
// - �����ڴ� �ǿ������� ����/Ÿ���� �����Ǿ� ����

// ������ �����ε�?
// �ϴ� [������ �Լ�]�� �����ؾ� ��
// �Լ��� ����Լ� vs �����Լ��� �����ϴ°�ó��, ������ �Լ��� �ΰ��� ������� ���� �� ����

// - ��� ������ �Լ� version
// -- a op b ���¿��� �������� �������� ����� (a�� Ŭ�������� ����, a�� '���� �ǿ�����' ��� ��)
// -- �Ѱ�) a�� Ŭ������ �ƴϸ� ��� ����

// - ���� ������ �Լ� version
// -- a op b ���¶�� a, b ��θ� ������ �Լ��� �ǿ����ڷ� ������ش�.
// -- �Ѱ�) ���Կ����� (a = b)�� ���� ������ version���� ������ ���Ѵ�.

// �̷��� ������ �Ѱ踦 ���� ���� ���ֱ⿡ ��� ������ ���� �� �� ����.

// ���� ���� ������
// - ���� ������, ���� ������, ���� ���� ������
// - ���� ���� ������ = ���Կ����� ��, �ڱ� �ڽ��� ���� Ÿ���� ���ڷ� �޴� ��

// ��Ÿ
// - ��� �����ڸ��� �� �����ε� �� �� �ִ� ���� �ƴϴ� (:: . .* �̷��� �ȉ�)
// - ���� ������ ++ --
// -- ������ (++a) operator++()
// -- ������ (a--) operator++(int)

class Position
{
public:
	Position() {}
	
	Position(const Position& arg)
	{

	}

	
	// ��� ������ �Լ� 1
	Position operator + (const Position& arg)
	{
		
		Position pos;
		pos._x = _x + arg._x;
		pos._y = _y + arg._y;

		return pos;
	}

	// ��� ������ �Լ� 2
	Position operator + (int arg)
	{
		Position pos(2);
		pos._x = _x + arg;
		pos._y = _y + arg;

		return pos;
	}

	// ��� ������ �Լ� 3
	bool operator == (const Position& arg)
	{
		return _x == arg._x && _y == arg._y;
	}


	// ���������, ���� ���� ������ �� Ư�� ��츦 �޴� ����
	// �� �״�� ��ü�� '����' �Ǳ� ���ϴ� Ư¡ ����
	
	// ��� ������ �Լ� 4
	Position& operator = (Position& arg)
	{
		_x = arg._x;
		_y = arg._y;

		// Position* this = �� �ڽ��� �ּ�;
		return *this;
	}

	void operator++()
	{
		_x++;
		_y++;
	}

	void operator++(int)
	{
		_x++;
		_y++;
	}


public:
	int _x;
	int _y;
};

// ���� ������ �Լ�1
Position operator + (int a, const Position& b)
{
	Position ret(2);

	ret._x = b._x + a;
	ret._y = b._y + a;

	return ret;
}

// ���� ������ �Լ�2
// void operator = (const Position& a, int arg)
// {
// 	 a._x = arg;
//	 a._y = arg
// }


int main()
{
	int a = 1;
	int b = 2;

	//����
	int c = (a=3);

	Position pos(2);
	pos._x = 0;
	pos._y = 0;

	Position pos2(2);
	pos2._x = 1;
	pos2._y = 1;
	

	// ��� ������ �Լ�1 �� �����Ѵ�.
	Position pos3 = pos + pos2;

	// ��� ������ �Լ�2 �� �����Ѵ�.
	Position pos4 = pos3 +1;
	pos4 = pos3 + 1;	// �̷��� �Ͽ��� ��� ������ �Լ�2�� ����ȴ�.

	// ��� ������ �Լ�2�� �θ� �����ȴٸ� ��ġ�� �ٸ��⿡ error�� ��´�
	// ���� ������ �Լ� 1 �� ����ȴ�.
	pos4 = 1 + pos3;

	// ��� ������ �Լ� 3
	bool isSame = (pos3 == pos4);

	Position pos5(2);

	// Position pos5 = 5;	5��� ���ڸ� �޴� �����ڸ� �����ϴ°��̱⿡ X
	
	// ��� ������ �Լ� 4 ����
	// ���� ������ �Լ� 2�� �Ȱ��� ��������� ���� �ɼ� ����. ( 5 = pos5) �� �����Ǳ⿡ ���������� ���Ƴ��Ҵ�.
	// ���� �����ڷ� ǥ���Ǳ⿡ O
	pos5 = 5;

	pos5 = (pos = 5);



	return 0;
}