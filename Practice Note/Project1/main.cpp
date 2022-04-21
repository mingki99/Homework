#include <iostream>

using namespace std;

template <class T>
class Array
{
public:
	Array()
	{
		cout << "Array 클래스 생성" << endl;

	}

private:
	T data[5];

public:
	void SetData(int num, T d);
	T GetData(int num);
};

template<class T>
void Array<T>::SetData(int num, T d)
{
	if (num < 0 || num > 4)
	{
		cout <<" 배열 길이를 넘었습니다.\n"<<endl;
	}
	else
	{
		data[num] = d;	// set 해주는 부분
	}
}

template<class T>
T Array<T>::GetData(int num)
{
	if (num < 0 || num > 4)
	{
		cout << " 배열 길이를 넘었습니다.\n" << endl;
		return data[0];
	}
	else
	{
		return data[num];	
	}
}

int main()
{
	cout << "int 형 배열을 생성합니다 \n" <<endl;

	Array<int> i_array;
	i_array.SetData(0, 80);
	i_array.SetData(1, 80);
	i_array.SetData(2, 80);
	i_array.SetData(3, 80);
	i_array.SetData(4, 80);
	i_array.SetData(5, 80);

	for (int i = 0; i < 5; i++)
	{
		cout << i_array.GetData(i) << endl;
	}

	cout << " double 형 배열을 생성합니다 \n" << endl;

	Array<double> i_array1;
	i_array1.SetData(0, 76.2);
	i_array1.SetData(1, 1.54);
	i_array1.SetData(2, 2.3252);
	i_array1.SetData(3, 0.474);
	i_array1.SetData(4, 999.999);
	i_array1.SetData(5, 999.999);
		   
	for (int i = 0; i < 5; i++)
	{
		cout << i_array1.GetData(i) << endl;
	}
	
	
	return 0;
}

