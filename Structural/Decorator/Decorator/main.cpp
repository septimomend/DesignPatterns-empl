// 2018 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Berserk.h"
#include "Warrior.h"

int main()
{
	Hero* hero = new Berserk(new Warrior());
	hero->move();

    return 0;
}

