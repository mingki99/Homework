#pragma once
#include "Chraracter.h"


class Monster : public Chraracter
{
public:
	Monster();
	virtual ~Monster();

	virtual int HP() ;
	virtual int MP() ;
	virtual int Attack() ;

	virtual void move() ;

	virtual void runningAway() = 0;
};

