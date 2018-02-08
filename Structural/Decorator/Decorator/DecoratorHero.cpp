// 2018 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "DecoratorHero.h"


DecoratorHero::DecoratorHero()
{
}

DecoratorHero::DecoratorHero(Hero* dhero)
{
	m_decorHero = dhero;
}

DecoratorHero::~DecoratorHero()
{
}

void DecoratorHero::move()
{
	m_decorHero->move();
}