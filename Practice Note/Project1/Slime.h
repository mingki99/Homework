#pragma once
#include "Monster.h"
class Slime : public PMonster
{
public:
	Slime();
	virtual ~Slime();

	void Move() override;
};

