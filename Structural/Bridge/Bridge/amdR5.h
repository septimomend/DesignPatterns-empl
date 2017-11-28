// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "Videocard.h"

class amdR5 : public Videocard
{
public:
	amdR5();
	~amdR5();

	virtual void setVideocard();
	virtual void runVideocard();
};

