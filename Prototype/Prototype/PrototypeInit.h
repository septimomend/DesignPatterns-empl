// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "FifthFloorBuilder.h"
#include "Skyscaper.h"

class PrototypeInit
{
	static BuilderPrototype* prot1;
	static BuilderPrototype* prot2;
	static BuilderPrototype* prot3;

public:
	PrototypeInit();
	~PrototypeInit();

	static void initPrototype();
	static BuilderPrototype* getProt1();
	static BuilderPrototype* getProt2();
	static BuilderPrototype* getProt3();
};

