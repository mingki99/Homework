#pragma once
<<<<<<< HEAD

#include "Character.h"

class Player : public Character
=======
#include "Chraracter.h"


class Player : public Chraracter
>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d
{
public:
	Player();
	virtual ~Player();

<<<<<<< HEAD
	int HP = 200;
	int MP = 100;
	
	void Gold();
	void Attec();

	void Move() override;
=======
	virtual int HP() ;
	virtual int MP() ;


	int Gold();
	virtual int Attack() ;
	virtual void move() ;
	
>>>>>>> f8517c689d1a0f7dcde194dbcc1a73f706f8ac3d
	
};

