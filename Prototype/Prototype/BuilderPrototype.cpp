// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "BuilderPrototype.h"


BuilderPrototype::BuilderPrototype()
{
}


BuilderPrototype::~BuilderPrototype()
{
}

string BuilderPrototype::getBuilderType()
{
	return m_builderType;
}

int BuilderPrototype::getFloors()
{
	return m_floors;
}

int BuilderPrototype::getFlats()
{
	return m_flats;
}