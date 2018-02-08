// 2018 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "Berserk.h"


Berserk::Berserk()
{
}

Berserk::Berserk(Hero* dhero) : DecoratorHero(dhero)
{
}

Berserk::~Berserk()
{
}

void Berserk::move()
{
	DecoratorHero::move();
	cout << "And he is in rage!" << endl;
}