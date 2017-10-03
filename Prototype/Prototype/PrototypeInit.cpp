// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "PrototypeInit.h"

BuilderPrototype* PrototypeInit::prot1 = 0;
BuilderPrototype* PrototypeInit::prot2 = 0;
BuilderPrototype* PrototypeInit::prot3 = 0;

PrototypeInit::PrototypeInit()
{
}


PrototypeInit::~PrototypeInit()
{
}

void PrototypeInit::initPrototype()
{
	prot1 = new Skyscaper(84, 1034);
	prot2 = new FifthFloorBuilder(34);
	prot3 = new Skyscaper(103, 1566);
}

BuilderPrototype* PrototypeInit::getProt1()
{
	return prot1->clone();
}

BuilderPrototype* PrototypeInit::getProt2()
{
	return prot2->clone();
}

BuilderPrototype* PrototypeInit::getProt3()
{
	return prot3->clone();
}