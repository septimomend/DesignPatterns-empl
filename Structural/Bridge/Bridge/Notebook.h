// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "nvidia920m.h"
#include "amdR5.h"

class Notebook
{
public:
	Notebook();
	~Notebook();

	virtual void setProcessor() = 0;
	virtual void setDisplay() = 0;
	virtual void setVideocard() = 0;

	Videocard* vcard;				// bridge
};

