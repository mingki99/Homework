#pragma once
#include "Monster.h"


class Slime : public Monster
{
public:
	Slime();
	virtual ~Slime();

	int HP() ;
	int MP() ;
	int Attack() ;

	void move() ;

	void runningAway() ;
};

