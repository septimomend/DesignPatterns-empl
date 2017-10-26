// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"

class BuilderPrototype
{
public:
	BuilderPrototype();
	~BuilderPrototype();

	virtual BuilderPrototype* clone() = 0;

	string getBuilderType();
	int getFloors();
	int getFlats();

protected:
	string m_builderType;
	int m_floors, m_flats;
};

