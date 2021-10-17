#pragma once
#include "Chraracter.h"


class Player : public Chraracter
{
public:
	Player();
	virtual ~Player();

	virtual int HP() ;
	virtual int MP() ;


	int Gold();
	virtual int Attack() ;
	virtual void move() ;
	
	
};

