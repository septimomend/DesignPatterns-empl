// 2017 © Chapkailo Ivan (septimomend) / MIT License
// You can copy, use and share examples of this code. But do not post it and do not report it as your own.

#include "stdafx.h"
#include "USBAdapter.h"

USBAdapter::USBAdapter()
{
}

USBAdapter::USBAdapter(NewStandard* _new)
{
	m_new = _new;
}

USBAdapter::~USBAdapter()
{
}

bool USBAdapter::connect()
{
	if (m_new->connect())
		return true;
	else
		return false;
}