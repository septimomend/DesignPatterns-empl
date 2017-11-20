// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#pragma once

#include "stdafx.h"
#include "USB_2_0.h"
#include "USB_3_0.h"

class USBAdapter : public OldStandard
{
public:
	USBAdapter();
	USBAdapter(NewStandard* _new);
	~USBAdapter();

	virtual bool connect();

private:
	NewStandard* m_new;
};

