// 2018 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"

class Hero
{
public:
	Hero();
	~Hero();

	virtual void move();

protected:
	string m_heroType;
};

