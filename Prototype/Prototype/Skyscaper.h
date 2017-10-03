// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "BuilderPrototype.h"

class Skyscaper : public BuilderPrototype
{
public:
	Skyscaper();
	Skyscaper(int floors, int flats);
	~Skyscaper();

	virtual BuilderPrototype* clone();
};

