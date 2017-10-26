// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "MeyersSingleton.h"

MeyersSingleton::MeyersSingleton()
{
}


MeyersSingleton::~MeyersSingleton()
{
}

MeyersSingleton& MeyersSingleton::getInstance()
{
	static MeyersSingleton instance;
	return instance;
}