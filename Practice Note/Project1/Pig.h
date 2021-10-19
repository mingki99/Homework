#pragma once
#include "Monster.h"
class Pig : public PMonster
{
public:
	Pig();
	virtual ~Pig();

	void Move() override;
};

