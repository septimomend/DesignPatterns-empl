// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "NewStandard.h"

class USB_3_0 :	public NewStandard
{
public:
	USB_3_0();
	~USB_3_0();

	virtual bool connect();
};

