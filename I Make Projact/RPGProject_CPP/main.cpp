#include <iostream>

using namespace std;

// 오늘의 주제 : 은닉성

// 객체 지향 (OOP Object Oriented
// 상속성
// 은닉성
// 다형성

// 은닉성(Data Hiding) = 캡슐화(Encapsulation)
// 사용자가 알지못하게 숨긴다.
// 숨기는 이유
// - 1) 정말 위험하고 건드리면 안되는 경우
// - 2) 다른 경로로 접근하길 원하는 경우

// 자동차
// - 핸들
// - 페달
// - 엔진
// - 문
// - 각종 전기전

// 일반 구매자 입장에서 사용하는 것?
// - 핸들/페달/문
// 몰라도 됨 (오히려 건드리면 큰일남)
// - 엔진, 각종 전기선

// public (공개적) protected(보호받는) private(개인의)
// - public : 누구한테나 공개한다.
// - protected : 나의 자손들에게만 허락.
// - private : 나만 사용한다. << class Car 내부에서만 사용

// 상속 접근 지정자 : 다음 세데한테 부모님의 유산을 어떻게 물려줄까?
// 부모님한테 물려받은 유산을 꼭 나의 자손들한테도 똑같이 물려줘야 하진않음.
// - public : 상속받은 모든 특성들 누구한테나 공개
// - protected : 상속받은 모든 특성들 나의 자손들에게만 허락.
// - private : 상속받은 클래스만 특성들을 사용하게 만든다 . 

// 상속 접근 지정자와 접근제어 지정자는 class 에서는 기본 private 이다. (그러므로 public을 꼭 기입해주자)


class Car
{
public: // (멤버) 접근 지정자
	void Movehandle() {}
	void PushPedal() {}
	void OpenDoor() {}

	// 키를 돌려야 접근 가능
	void TurnKey()
	{
		RunEngine();
	}


protected:
	void DisassembleCar() {}
	void RunEngine() {}
	void ConnectCircuit() {}


	
public:
	// 핸들
	// 페달
	// 엔진
	// 문
	// 각종 전기선

};

class SuperCar : public Car // 상속 접근 지정자
{
public:
	void PushRemoteController()
	{
		RunEngine();
	}

};

// '캡슐화'
// 연관된 데이터와 함수를 논리적으로 묶어놓은 것

class Berserker
{
public:
	int GetHp() {return _hp;}

	// 사양 : 체력이 50 이하로 떨어지면 버서커 모드 발동 (강해짐)

	void SetHP(int hp)
	{
		_hp = hp;
		if (_hp < 50)
		{
			SetBerserkerMode();
		}
	}

private:
	void SetBerserkerMode()
	{
		cout << "매우 강해짐 !" << endl;
	}

private:
	int _hp = 100;

};

int main()
{
	Car car;

	return 0;
}