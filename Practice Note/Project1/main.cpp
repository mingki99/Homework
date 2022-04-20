#include <iostream>

using namespace std;



class Handle
{
public:
	Handle()
	{
		printf("Handle spawn \n");
	}
};

class Car	: private Handle
{
public:
	Car()
	{
		printf("Car Spawn\n");
	}
};

class RacingCar : public Car
{
public:
	RacingCar()
	{
		printf("RasingCar Spawn\n");
	}
};

class SpeedCar :public RacingCar
{
public:
	SpeedCar()
	{
		printf("SpeedCar Spawn\n");
	}
};


int main()
{
	SpeedCar pc1;
	
	
	return 0;
}

