#include <iostream>


using namespace std;

template <class T>

T Square(T x)
{
	cout << x << " �� ������";
	x = x * x;
	cout << x << " �Դϴ�." << endl;
	
	return x;
}

//inline int Square(int x)
//{
//	
//	printf("%d �� ������", x);
//	x = x * x;
//	printf("%d�Դϴ�\n", x);
//	return x;
//
//}
//
//inline double Square(double x)
//{
//
//	// print �Ǽ� double �� = %lf
//	printf("%1.2lf �� ������", x);
//	x = x * x;
//	printf("%1.2lf�Դϴ�\n", x);
//	return x;
//}

int main()
{
	printf("������ �Է��Ͻʽÿ�. \n");
	int iinput = 0;

	cin >> iinput;

	Square(iinput);

	printf("�Ҽ��� �Է��Ͻʽÿ�.\n");

	double dinput = 0;

	cin >> dinput;

	Square(dinput);

	return 0;
}

