#pragma once
#include "Monster.h"
<<<<<<< HEAD
class Slime : public PMonster
=======


class Slime : public Monster
>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d
{
public:
	Slime();
	virtual ~Slime();

<<<<<<< HEAD
	void Move() override;
=======
	int HP() ;
	int MP() ;
	int Attack() ;

	void move() ;

	void runningAway() ;
>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d
};

