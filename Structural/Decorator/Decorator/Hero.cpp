// 2018 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "Hero.h"


Hero::Hero()
{
}


Hero::~Hero()
{
}

void Hero::move()
{
	cout << "The " << m_heroType << " attacks you with sword!" << endl;
}