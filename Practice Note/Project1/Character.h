#pragma once
class Character
{
public:
	Character();
	virtual ~Character();

	virtual int HP();
	virtual int MP();

	virtual void Attec();

	virtual void Move() = 0;
};

