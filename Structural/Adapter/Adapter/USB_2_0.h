// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "OldStandard.h"

class USB_2_0 : public OldStandard
{
public:
	USB_2_0();
	~USB_2_0();

	virtual bool connect();
};

