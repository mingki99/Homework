#include <iostream>

using namespace std;


class Point
{
public:
	Point()
	{

	}
	

public:
	Point operator-(Point p)
	{
		Point point;
		point._hp = _hp - p._hp;

		return point;
	}

	Point operator--(int b)
	{
		Point point = *this;
		_hp--;

		return point;
	}

	Point operator--()
	{
		_hp--;

		return *this;
	}

	void Add_hp(int a)
	{
		_hp = _hp + a;
	}

	int Get_hp()
	{
		return _hp;
	}

private:
	int _hp;
	
};


int main()
{
	Point p1;
	p1.Add_hp(100);

	Point p2;
	p2.Add_hp(10);

	Point p3 = p1 - p2;
	cout << p3.Get_hp() <<'\n' << endl;

	--p3;
	cout << p3.Get_hp() << '\n' << endl;
	
	return 0;
}

