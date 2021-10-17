#pragma once
#include "Monster.h"


class Goblin : public Monster
{
public:
	Goblin();
	virtual ~Goblin();

	void move() override;
	void runningAway() override;
};

