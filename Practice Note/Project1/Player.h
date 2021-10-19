#pragma once

#include "Character.h"

class Player : public Character
{
public:
	Player();
	virtual ~Player();

	int HP = 200;
	int MP = 100;
	
	void Gold();
	void Attec();

	void Move() override;
	
};

