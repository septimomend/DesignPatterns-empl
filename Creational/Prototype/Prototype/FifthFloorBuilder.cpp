// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "FifthFloorBuilder.h"


FifthFloorBuilder::FifthFloorBuilder()
{
}

FifthFloorBuilder::FifthFloorBuilder(int flats)
{
	m_builderType = "FifthFloorBuilder";
	m_floors = 5;
	m_flats = flats;
}

FifthFloorBuilder::~FifthFloorBuilder()
{
}

BuilderPrototype* FifthFloorBuilder::clone()
{
	return new FifthFloorBuilder(*this);
}