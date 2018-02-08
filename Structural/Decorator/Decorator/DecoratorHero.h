// 2018 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "Hero.h"

class DecoratorHero : public Hero
{
public:
	DecoratorHero();
	DecoratorHero(Hero* dhero);
	~DecoratorHero();

	virtual void move();

protected:
	Hero* m_decorHero;
};

