// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"

class MeyersSingleton
{
public:
	static MeyersSingleton& getInstance();

private:
	MeyersSingleton();
	MeyersSingleton(const MeyersSingleton& ms) = delete;
	MeyersSingleton& operator=(const MeyersSingleton& ms) = delete;
	~MeyersSingleton();
};

