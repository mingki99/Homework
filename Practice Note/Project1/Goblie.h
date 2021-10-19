#pragma once
#include "Monster.h"

class Goblie : public PMonster
{
public:
	Goblie();
	virtual ~Goblie();

	void Move() override;
};

