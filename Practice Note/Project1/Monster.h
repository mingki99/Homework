#pragma once
#include "Character.h"

class PMonster : public Character
{
public:	
	PMonster();
	virtual ~PMonster();

	virtual int HP();
	virtual int MP();

	virtual void Attec();

	virtual void RunningAway() ;

	virtual void Move() override;

};

