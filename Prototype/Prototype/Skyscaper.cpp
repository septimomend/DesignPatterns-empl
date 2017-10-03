// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "Skyscaper.h"


Skyscaper::Skyscaper()
{
}

Skyscaper::Skyscaper(int floors, int flats)
{
	m_builderType = "Skyscaper";
	m_floors = floors;
	m_flats = flats;
}

Skyscaper::~Skyscaper()
{
}

BuilderPrototype* Skyscaper::clone()
{
	return new Skyscaper(*this);
}