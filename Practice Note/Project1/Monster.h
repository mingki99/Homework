#pragma once
<<<<<<< HEAD
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

=======
#include "Chraracter.h"


class Monster : public Chraracter
{
public:
	Monster();
	virtual ~Monster();

	virtual int HP() ;
	virtual int MP() ;
	virtual int Attack() ;

	virtual void move() ;

	virtual void runningAway() = 0;
>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d
};

