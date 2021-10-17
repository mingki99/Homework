#pragma once
#include "Monster.h"


class Pig : public Monster
{
public:
	Pig();
	virtual ~Pig();

	void move() override;

	void runningAway() override;
};

