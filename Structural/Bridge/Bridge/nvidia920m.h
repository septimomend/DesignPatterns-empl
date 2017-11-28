// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "Videocard.h"

class nvidia920m : public Videocard
{
public:
	nvidia920m();
	~nvidia920m();

	virtual void setVideocard();
	virtual void runVideocard();
};

