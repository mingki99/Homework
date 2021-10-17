#pragma once
#include "Engin.h"

class Chraracter : public Engin
{
public:
	Chraracter();
	virtual ~Chraracter();

	virtual int HP()= 0;
	virtual int MP();

	virtual int Attack();
	
	virtual void move() = 0;

};

