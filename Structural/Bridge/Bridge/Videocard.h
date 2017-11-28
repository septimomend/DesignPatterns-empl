// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"

class Videocard
{
public:
	Videocard();
	~Videocard();

	virtual void setVideocard() = 0;
	virtual void runVideocard() = 0;
};

