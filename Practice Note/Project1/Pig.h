#pragma once
#include "Monster.h"
<<<<<<< HEAD
class Pig : public PMonster
=======


class Pig : public Monster
>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d
{
public:
	Pig();
	virtual ~Pig();

<<<<<<< HEAD
	void Move() override;
=======
	void move() override;

	void runningAway() override;
>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d
};

