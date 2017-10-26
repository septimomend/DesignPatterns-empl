// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PrototypeInit.h"

int main()
{
	PrototypeInit::initPrototype();
	BuilderPrototype* builder;
	builder = PrototypeInit::getProt1();
	cout << builder->getBuilderType() << " " << builder->getFloors() << " " << builder->getFlats() << endl;
	builder = PrototypeInit::getProt2();
	cout << builder->getBuilderType() << " " << builder->getFloors() << " " << builder->getFlats() << endl;
	builder = PrototypeInit::getProt3();
	cout << builder->getBuilderType() << " " << builder->getFloors() << " " << builder->getFlats() << endl;

    return 0;
}

